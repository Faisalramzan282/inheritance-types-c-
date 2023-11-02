#include<iostream>
#include "Child.h"

Child::Child():childName("Ahsan"){}

void Child::childMethod(){
    std::cout<<"child method is called "<<std::endl;
    // std::cout<<"child name is "<<name<<std::endl;
}
