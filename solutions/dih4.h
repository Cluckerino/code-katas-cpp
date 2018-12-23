#ifndef DIH4_H
#define DIH4_H

#include <iostream>
class Dih4
{
  int matrix[2][2] = {{0, 0}, {0, 0}};

public:
  Dih4() = default;
  Dih4(int x1, int y1, int x2, int y2);

  // Print the contents
  friend std::ostream &operator<<(std::ostream &os, const Dih4 &dih4);

  // Matrix multiplication
  friend Dih4 operator*(const Dih4 &lhs, const Dih4 &rhs);

  // Matrix inverse
  Dih4 inv() const;

  // Declare constants here
  const static Dih4 IDENTITY;
  const static Dih4 ROTATE_90_ANTICLOCKWISE;
  const static Dih4 ROTATE_180;
  const static Dih4 ROTATE_90_CLOCKWISE;
};

#endif /* DIH4_H */