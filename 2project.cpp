#include<iostream>
// game rockpaperscissorss

int rockscissorsPaper(){
    // rock = 1 scissorss = 2 paper = 3
    srand(time(0));
    int a = rand() % 3 + 1;
    return a;
}

int main(){
    int userTool;
    std::cout<< "take ur tool(rock = 1 scissors = 2 paper = 3): ";
    std::cin >> userTool;

    int computersTool = rockscissorsPaper();
    std::cout<< "computer's tool: " << computersTool<<std::endl;
    
    
    switch(computersTool){
        case(1):
            if(userTool == 2){
                std::cout << "ure lost!";
                break;
            }
            else if(userTool == 1){
                std::cout << "draw";
                break;

            }
            else {
                std::cout << "ure won";
                break;
            }
        case(2):
            if(userTool == 3){
                std::cout << "ure lost!";
                break;
            }
            else if(userTool == 2){
                std::cout << "draw";
                break;

            }
            else {
                std::cout << "ure won";
                break;
            }
        case(3):
            if(userTool == 1){
                std::cout << "ure lost!";
                break;
            }
            else if(userTool == 3){
                std::cout << "draw";
                break;

            }
            else {
                std::cout << "ure won";
                break;
            }
        
    }
}
