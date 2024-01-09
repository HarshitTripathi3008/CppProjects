#include<iostream>
void happybirthday(std::string name,int age);
int main()
{ 
    std::string name ="Harsh";
    int age=16;
    happybirthday(name, age);
    return 0;
}
void happybirthday(std::string name,int age)
{
    std::cout<<"HAPPY BIRTHDAY "<<name<<'\n';
    std::cout<<"HAPPY BIRTHDAY "<<name<<'\n';   
    std::cout<<"YOUR ARE "<<age<<" YEARS OLD\n";

}


