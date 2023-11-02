#include<iostream>
#include "Child.h"

Child::Child():name("Ahsan"), age(12){}
void Child:: childMethod(){
    std::cout<<"Child method is called "<<std::endl;
}