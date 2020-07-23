#ifndef COMPOSITION_H
#define COMPOSITION_H
#include <iostream>

class Composition
{
private:
  

public:
  Composition()
  {
    std::cout << "Composition ctor is running." << std::endl; 
  }
  virtual ~Composition(){};
};

#endif /* COMPOSITION_H */
