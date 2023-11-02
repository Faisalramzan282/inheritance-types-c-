#include<iostream>
#include "Child.h"
int main(){
    Child obj;
    obj.childMethod();
    obj.parentMethod();
    std::cout<<"child name is "<<  obj.childName<<std::endl;
    std::cout<<"parent name is "<<obj.Parent::name<<std::endl;
    return 0;
}
