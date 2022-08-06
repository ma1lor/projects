import json
import requests
from bs4 import BeautifulSoup


list = []
add_url = ''


def parse():
    page = 1
    while(page < 84):
        add_url = f'page/{page}/'
        url = f'https://hdrezka.ag/cartoons/{add_url}'
        headers = {
            "Accept": "*/*",
            "User-Agent": "Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/103.0.5060.114 Safari/537.36 OPR/89.0.4447.64"
        }
        r = requests.get(url, headers=headers)
        soup = BeautifulSoup(r.text, 'lxml')
        with open('test4.html', 'w') as file:
            file.write(r.text)
        with open('test4.html') as file:
            info = file.read()
        soup = BeautifulSoup(info, 'lxml')
        for name in soup.find_all(class_='b-content__inline_item-link'):
            try:
                name.find("div").text.split(', ')[2]
                list.append({
                    'title' : name.find("a").text,
                    'year' : name.find("div").text.split(', ')[0],
                    'country' : name.find("div").text.split(', ')[1],
                    'genre': name.find("div").text.split(', ')[2]
                })

            except:
                list.append({
                    'title' : name.find("a").text,
                    'year' : name.find("div").text.split(', ')[0],
                    'country' : name.find("div").text.split(', ')[1],


            })
        page+=1



    with open("list.json", "w") as file:
        json.dump(list, file, indent=4, ensure_ascii=False)



def main():
    parse()

if __name__ == "__main__":
    main()


