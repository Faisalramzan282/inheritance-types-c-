#include <iostream>
#include<string>
class Parent
{
public:
   std::string name = "Ahsan";
public:
    void parentMethod(){
        std::cout<<"Parent method is called"<<std::endl;
    }
};

//if we include it in single file
//what happened if child class into another classes 
// class Child: public Parent
// {
// private:
//    std::string name = "Ahsan";
// public:
//     void childMethod(){
//         std::cout<<"child method is called"<<std::endl;
//     }
// };
// int main(){
//     Child obj;
//     obj.childMethod();
//     obj.parentMethod();
// }