#include<iostream>
int getdigit(const int number);
int sumodddigit(const std::string cardnumber);
int sumevendigit(const std::string cardnumber);
int main(){
    std::string cardnumber;
    int result= 0;
    std::cout<<"ENTER A CREDIT CARD NUMBER #: ";
    std::cin>>cardnumber;
    result =sumevendigit(cardnumber)+sumodddigit(cardnumber);
    if(result%10 ==0){
        std::cout<<cardnumber<<" is valid";
    }
    else{
      std::cout<<cardnumber<<" is not valid";  
    }
    return 0;
}
int getdigit(const int number){
    return number % 10 + (number / 10 % 10);
}
int sumodddigit(const std::string cardnumber){
    int sum=0;
    for(int i=cardnumber.size() - 1; i>=0; i-=2){
        sum+=getdigit(cardnumber[i]-'0');
    }
    return sum;
}
int sumevendigit(const std::string cardnumber){
    int sum=0;
    for(int i=cardnumber.size() - 2; i>=0; i-=2){
        sum+=getdigit((cardnumber[i]-'0')*2);
    }
    return sum;
}