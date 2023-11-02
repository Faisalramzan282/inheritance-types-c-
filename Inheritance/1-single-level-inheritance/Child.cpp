#include<iostream>
#include<string>
#include "Parent.cpp"
class Child: public Parent
{
public:
   std::string name = "Raza";
public:
    void childMethod(){
        std::cout<<"child method is called"<<std::endl;
    }
};
