#include<iostream>
class Student{
    public:
        std::string name;
        int age;
        double gpa;
    /*Student(std::string name , int age , double gpa){
        this->name=name;
        this->age=age;
        this->gpa=gpa;*/
    Student(std::string x , int y , double z){
        name=x;
        age=y;
        gpa=z;
    }
};

int main(){
    std::cout<<"**************************************************************************************\n";
    Student student1("Ram",99999999,9.99);
    std::cout<<student1.name<<'\n';
    std::cout<<student1.age<<'\n';
    std::cout<<student1.gpa<<'\n';
    std::cout<<"**************************************************************************************\n";
    Student student2("Krishna",99999999,9.999);
    std::cout<<student2.name<<'\n';
    std::cout<<student2.age<<'\n';
    std::cout<<student2.gpa<<'\n';
    std::cout<<"**************************************************************************************\n";
    Student student3("Shiva",99999999,9.98);
    std::cout<<student3.name<<'\n';
    std::cout<<student3.age<<'\n';
    std::cout<<student3.gpa<<'\n';
    std::cout<<"**************************************************************************************\n";
    return 0;
}