#include<iostream>
class Stove{
    private:
        int temperature = 0;
    public:
        Stove(int temperature){
            setTemperature(temperature);
        }
        int getTemperature(){
            return temperature;
        }
        void setTemperature(int temperature){
            if(temperature <0){
                this->temperature=0;
            }
            else if(temperature >=50){
                this->temperature=50;
            }
            else{
            this->temperature=temperature;
            }
        }
};
int main(){
    Stove stove(60);
    //stove.setTemperature(60);
    std::cout<<"The temperature setting is: "<<stove.getTemperature()<<'\n';
    return 0;
}