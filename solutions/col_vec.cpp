#include "col_vec.h"

// Initialize with contents
ColVec::ColVec(int x, int y)
{
    array[0] = x;
    array[1] = y;
}

// Print the contents
std::ostream &operator<<(std::ostream &os, const ColVec &vec)
{
    os << "(" << vec.array[0] << " " << vec.array[1] << ")" << std::endl;
    return os;
}

// Multiply with matrix
ColVec operator*(const Dih4 &dih4, const ColVec &vec)
{
    ColVec result;
    for (auto r = 0; r < 2; r++)
    {
        for (auto i = 0; i < 2; i++)
        {
            result.array[r] += dih4.read(r, i) * vec.array[i];
        }
    }

    return result;
}