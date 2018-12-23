#include "dih4.h"

Dih4::Dih4(int x1, int y1, int x2, int y2)
{
    matrix[0][0] = x1;
    matrix[0][1] = y1;
    matrix[1][0] = x2;
    matrix[1][1] = y2;
}

std::ostream &operator<<(std::ostream &os, const Dih4 &dih4)
{
    os << std::endl;
    os << "[[" << dih4.matrix[0][0] << " " << dih4.matrix[0][1] << "]" << std::endl;
    os << " [" << dih4.matrix[1][0] << " " << dih4.matrix[1][1] << "]]" << std::endl;
    return os;
}

Dih4 operator*(const Dih4 &lhs, const Dih4 &rhs)
{
    Dih4 result;

    for (auto r = 0; r < 2; r++)
    {
        for (auto c = 0; c < 2; c++)
        {
            for (auto i = 0; i < 2; i++)
            {
                result.matrix[r][c] += lhs.matrix[r][i] * rhs.matrix[i][c];
            }
        }
    }
    return result;
}