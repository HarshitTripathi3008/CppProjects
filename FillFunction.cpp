#include<iostream>

int main(){
    const int size = 200;
    std::string foods[size];
    fill(foods, foods + (size/2), "pizza");
    fill(foods + (size/2),foods + size, "burger");
    for(std::string food: foods){
        std::cout<<food<<"\n";
    }
    return 0;
}