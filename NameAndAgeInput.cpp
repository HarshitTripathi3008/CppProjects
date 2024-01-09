#include<iostream>


int main()
{

    std::string name;
    int age;
    std::cout  << "what is your full name?: ";
    std::getline(std::cin >> std::ws, name);
    std::cout<<"what is your age?: ";
    std::cin>> age;
    std::cout << "hello your name is "<< name;
    std::cout<<" and your age is "<<age <<" years";
    return 0;
}