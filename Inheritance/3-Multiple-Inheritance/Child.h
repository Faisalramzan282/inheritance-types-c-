#ifndef CHILD_H
#define CHILD_H
#include "Parent1.h"
#include "Parent2.h"
#include <string>
class Child : public Parent1, public Parent2
{
protected:
   std::string name;
   int age;
public:
    Child();
    void childMethod();
};
#endif