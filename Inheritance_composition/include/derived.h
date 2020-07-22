#ifndef DERIVED_H
#define DERIVED_H
#include "base.h"
#include "composition.h"
class Derived : Base
{
private:
  Composition r;

public:
  Derived()
  {
    std::cout << "derived ctor is running." << std::endl;  
  }
  virtual ~Derived(){};
};

#endif /* DERIVED_H */
