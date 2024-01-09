#include<iostream>

struct Car{
    std::string model;
    int year;
    std::string color;
};
void printCar(Car &car);
void paintcar(Car &car,std::string color);
int main(){
    Car car1;
    Car car2;

    car1.model = "Mustang";
    car1.year = 2023;
    car1.color = "Black";

    car2.model = "Corvette";
    car2.year = 2020;
    car2.color = "Red";
    std::cout<<&car1<<'\n';
    paintcar(car1 ,"Silver");
    paintcar(car2 ,"Purple");
    printCar(car1);
    printCar(car2);
    return 0;
}
void printCar(Car &car){
    
    std::cout<<car.model<<'\n';
    std::cout<<car.year<<'\n';
    std::cout<<car.color<<'\n';
    std::cout<<&car<<'\n';
    
}
void paintcar(Car &car,std::string color){
    car.color =color;

}