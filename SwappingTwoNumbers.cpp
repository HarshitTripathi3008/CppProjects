#include<iostream>
void swap(std::string &x,std::string &y);
int main(){
    std::string x="kool-Aid";
    std::string y="water";
    swap(x , y);
    std::cout<< "x: "<<x<<'\n';
    std::cout<< "y: "<<y<<'\n';
    return 0;
}
void swap(std::string  &x,std::string &y){
    std::string temp;
    temp = x;
    x = y;
    y = temp;  
}