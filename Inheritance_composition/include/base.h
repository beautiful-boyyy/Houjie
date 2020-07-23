#ifndef BASE_H
#define BASE_H
#include <iostream>
class Base
{
private:

public:
  Base()
  {
    std::cout << "Base ctor running." << std::endl;
  }
  virtual ~Base(){};
};

#endif /* BASE_H */
