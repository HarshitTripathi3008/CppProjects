#include<iostream>
class Human{
    public:
        std::string name;
        std::string occupation;
        int age;

        void eat(){
            std::cout<<"This person is eating.\n";
        }
        void drink(){
            std::cout<<"This person is drinking.\n";
        }
        void sleep(){
            std::cout<<"This person is sleeping.\n";
        }
        void rule(){
            std::cout<<"This person ruled a kingdom.\n";
        }
        void worship(){
            std::cout<<"This person is worshipped by billions.\n";
        }
};

int main(){

    Human human1;
    Human human2;

    human1.name="Rick";
    human1.occupation="Scientist";
    human1.age=28;

    
    std::cout<<human1.name<<'\n';
    std::cout<<human1.age<<'\n';
    std::cout<<human1.occupation<<'\n';
    
    human1.eat();
    human1.drink();
    human1.sleep();
    
    std::cout<<"*******************************************************\n";
    
    human2.name="Ram";
    human2.occupation="King";
    human2.age=999999999;

    std::cout<<human2.name<<'\n';
    std::cout<<human2.age<<'\n';
    std::cout<<human2.occupation<<'\n';
    
    human2.rule();
    human2.worship();
    

    return 0;
}