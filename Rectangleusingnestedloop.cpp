#include<iostream>
int main()
{ 
    int rows;
    int columns;
    char symbol;
    
    std::cout<<"HOW MANY ROWS?: ";
    std::cin>>rows;
    std::cout<<"HOW MANY COLUMNS?: ";
    std::cin>>columns;
    std::cout<<"ENTER THE SYMBOL TO PRINT :: ";
    std::cin>>symbol;

    for(int i=1;i<=rows;i++)
       {for(int j=1;j<=columns;j++)
           {std::cout<<symbol;
        }
        std::cout<<"\n";
    }

    return 0;
}