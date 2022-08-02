#include <iostream>

int getNumberFromUser(){
    
    std::cout << "input ur number (0-10): ";

    int a;

    std::cin >> a;
    return a;
}

int getRandomNumber2(){
    srand(time(NULL));
    
    int a;



    a=rand() % 10 +1;

    return a;
}


int main(){
    int number1, number2;
    while(number1!=number2){
        number1= getNumberFromUser();
        number2= getRandomNumber2();

    }
    std::cout << "u got it";



}


