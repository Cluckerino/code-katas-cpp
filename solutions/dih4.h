#ifndef DIH4_H
#define DIH4_H

#include <iostream>
class Dih4
{
public:
  friend std::ostream &operator<<(std::ostream &os, const Dih4 &dih4);

private:
  int matrix[2][2];
};

#endif /* DIH4_H */