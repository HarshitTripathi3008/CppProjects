#include<iostream>
#include<ctime>
char getuserchoice();
char getcomputerchoice();
void showchoice(char choice);
void choosewinner(char player , char coumputer);
int main()
{
    char player;
    char computer;
    
    player=getuserchoice();
    std::cout<<"YOUR CHOICE : ";
    showchoice(player);
    computer = getcomputerchoice();
    std::cout<<"COMPUTER'S CHOICE : ";
    showchoice(computer);
    choosewinner(player , computer);

    return 0;
}
char getuserchoice(){
    char player;
    std::cout<<"**********************************************************************************************\n";
    std::cout<<"ROCK-PAPER-SCISSORS GAME!\n";
    do{
        std::cout<<"CHOOSE ONE OF THE FOLLOWING\n";
        std::cout<<"**********************************************************************************************\n";
        std::cout<<"'R' FOR ROCK\n";
        std::cout<<"'P' FOR PAPPER\n";
        std::cout<<"'S' FOR SCISSOR\n";
        std::cin>>player;
    }
    while(player !='P'&& player !='R'&& player !='S');
    return player;
}
char getcomputerchoice(){
    srand(time(0));
    int num = (rand() % 3) + 1;
    switch(num){
        case 1:return 'R';
        case 2:return 'P';
        case 3:return 'S';
    }
    return 0;
}
void showchoice(char choice){
    switch(choice){
        case 'R':std::cout<<"ROCK\n";
                 break;
        case 'P':std::cout<<"PAPER\n";
                 break;
        case 'S':std::cout<<"SCISSOR\n";
                 break;
    }
    
}
void choosewinner(char player , char computer){
    switch(player){
        case 'R':if (computer == 'R'){
                      std::cout << "IT'S A TIE!\n";
                }
                else if (computer == 'P'){
                      std::cout << "YOU LOSE!\n";
                }
                else{
                      std::cout << "YOU WIN!\n";
                }
                break;
        case 'P':if (computer == 'P'){
                      std::cout << "IT'S A TIE!\n";
                }
                else if (computer == 'S'){
                      std::cout << "YOU LOSE!\n";
                }
                else{
                      std::cout << "YOU WIN!\n";
                }
                break;
        case 'S':if (computer == 'S'){
                      std::cout << "IT'S A TIE!\n";
                }
                else if (computer == 'R'){
                      std::cout << "YOU LOSE!\n";
                }
                else{
                      std::cout << "YOU WIN!\n";
                }
                break;
    }
    
}