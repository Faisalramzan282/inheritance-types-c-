#include "Child.cpp"
int main(){
    Child obj;
    obj.childMethod();
    obj.parentMethod();
    std::cout<<"name in child is "<<obj.name<<std::endl;
std::cout << "Parent's name in main: " << obj.Parent::name << std::endl;     return 0;
}
