#include<iostream>
#include<ctime>
int main()
{
    srand(time(0));
    int randnum = (rand() % 5)+1;
    switch(randnum)
    {
        case 1:std::cout<<"You Win A Bumper Sticker!\n";
            break;
        case 2:std::cout<<"You Win A Bumper Ticket TO NewYork!\n";
            break;
        case 3:std::cout<<"You Win A Lunch!\n";
            break;
        case 4:std::cout<<"You Win A Gift Card!\n";
            break;
        case 5:std::cout<<"You Win A Car!\n";
            break;

    }

    return 0;
}