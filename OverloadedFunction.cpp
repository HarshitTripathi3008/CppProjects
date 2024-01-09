#include<iostream>
void bakepizza();
void bakepizza(std::string topping1);
void bakepizza(std::string topping1,std::string topping2);
int main()
{
    bakepizza("cheese","onion");

    return 0;
}
void bakepizza(){
    std::cout<<"Here is your pizza!\n";
}
void bakepizza(std::string topping1,std::string topping2){
    std::cout<<"here is your "<<topping1<<" and "<<topping2<<" pizza!\n";
}