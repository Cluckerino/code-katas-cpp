#include "dih4.h"

// Initialize with contents
Dih4::Dih4(int x1, int y1, int x2, int y2)
{
    matrix[0][0] = x1;
    matrix[0][1] = y1;
    matrix[1][0] = x2;
    matrix[1][1] = y2;
}

// Print the contents
std::ostream &operator<<(std::ostream &os, const Dih4 &dih4)
{
    os << std::endl;
    os << "[[" << dih4.matrix[0][0] << " " << dih4.matrix[0][1] << "]" << std::endl;
    os << " [" << dih4.matrix[1][0] << " " << dih4.matrix[1][1] << "]]" << std::endl;
    return os;
}

// Matrix multiplication
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

// Matrix inverse;
Dih4 Dih4::inv() const
{
    // [a b]
    // [c d]
    // det = (ad-bc)
    // inv = (1/det) * [d -b]
    //                 [-c a]
    auto a = matrix[0][0];
    auto b = matrix[0][1];
    auto c = matrix[1][0];
    auto d = matrix[1][1];
    auto det = (a * d) - (b * c);
    return Dih4(d / det, -b / det, -c / det, a / det);
}

// Read contents
int Dih4::read(int r, int c) const
{
    return matrix[r][c];
}

// Define constants here
const Dih4 Dih4::IDENTITY = Dih4{1, 0, 0, 1};
const Dih4 Dih4::ROTATE_90_ANTICLOCKWISE = Dih4{0, -1, 1, 0};
const Dih4 Dih4::ROTATE_180 = Dih4{-1, 0, 0, -1};
const Dih4 Dih4::ROTATE_90_CLOCKWISE = Dih4{0, 1, -1, 0};
