#include<iostream>
int main(){
    std::string foods[5];
    std::string temp;
    int size=sizeof(foods)/sizeof(foods[0]);
    for(int i=0; i<size; i++){
        std::cout<<"enter a food you like or 'q' to quit #"<< i+1 <<": ";
        std::getline(std::cin, temp);
        if(temp=="q"){
            break;
        }
        else{
            foods[i]=temp;
        }
    }
    std::cout<<"you like the following food:\n";
    for(int i=0; !foods[i].empty(); i++){
        std::cout << foods[i] <<'\n';
    }
    return 0;
}