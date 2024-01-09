#include<iostream>
int main()
{
    //std::string students[]={"spongeboob","patric","naruto","kakashi"};
    char grades[]={'A','B','C','D','E','F'};
    for(int i = 0 ; i < sizeof(grades)/sizeof(char); i++)
    //for(int i = 0 ; i < sizeof(students)/sizeof(std::string); i++)
    {
        std::cout<<grades[i]<<'\n';
       // std::cout<<students[i]<<'\n';
    }
    return 0;
}