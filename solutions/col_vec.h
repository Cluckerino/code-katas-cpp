#ifndef COL_VEC_H
#define COL_VEC_H

#include <iostream>
#include "dih4.h"

class ColVec
{
    int array[2] = {0, 0};

  public:
    ColVec() = default;
    ColVec(int x, int y);

    // Print the contents
    friend std::ostream &operator<<(std::ostream &os, const ColVec &vec);

    // Multiply with matrix
    friend ColVec operator*(const Dih4 &dih4, const ColVec &vec);
};

#endif /* COL_VEC_H */
