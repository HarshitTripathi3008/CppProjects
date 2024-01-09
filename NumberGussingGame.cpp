#include<iostream>
#include<ctime>
int main()
{
    int num;
    int guess;
    int tries=0;
    srand(time(NULL));
    num=(rand()%100)+1;
    std::cout<<"************************************ NUMBER GUSSING GAME ***************************************\n";
    do{
        std::cout<<"ENTER A GUESS BETWEEN(1-100): ";
        std::cin>>guess;
        tries++;

        if(guess > num){
            std::cout<<"TOO HIGH!\n";
        }
        else if(guess < num){
            std::cout<<"TOO LOW!\n";
        }
        else{
            std::cout<<"CORRECT! # OF TRIES: "<<tries<<'\n';
        }
    }while(guess != num);
    std::cout<<"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    return 0;
}