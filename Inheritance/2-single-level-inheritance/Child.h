#ifndef CHILD_H
#define CHILD_H
#include "Parent.h"
class Child : public Parent
{
public:
     std::string childName;
public:
   Child();
   void childMethod();
};
#endif

