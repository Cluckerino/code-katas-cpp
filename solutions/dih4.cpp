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

// Equality - compare matrix elements
bool operator==(const Dih4 &lhs, const Dih4 &rhs)
{
    for (auto r = 0; r < 2; r++)
    {
        for (auto c = 0; c < 2; c++)
        {
            if (lhs.matrix[r][c] != rhs.matrix[r][c])
                return false;
        }
    }
    return true;
}

// Inequality - use equality operator
bool operator!=(const Dih4 &lhs, const Dih4 &rhs) { return !(lhs == rhs); }

// Matrix inverse
Dih4 Dih4::inv() const
{
    // [a b]
    // [c d]
    // inv = (1/det) * [d -b]
    //                 [-c a]
    auto detVal = det();
    return Dih4(matrix[1][1] / detVal, -matrix[0][1] / detVal,
                -matrix[1][0] / detVal, matrix[0][0] / detVal);
}

// Matrix determinant
int Dih4::det() const
{
    // [a b]
    // [c d]
    // det = (ad-bc)
    return (matrix[0][0] * matrix[1][1]) - (matrix[0][1] * matrix[1][0]);
}

// Read contents
int Dih4::read(int r, int c) const { return matrix[r][c]; }

// Rotation check: det == 1
bool Dih4::is_rotation() const { return det() == 1; }

// Reflection check: det == -1
bool Dih4::is_reflection() const { return det() == -1; }

// Fluent-style multiplier
Dih4 Dih4::then(const Dih4 &dih4) const { return dih4 * *this; }

// Define constants here
const Dih4 Dih4::IDENTITY = Dih4{1, 0, 0, 1};
const Dih4 Dih4::ROTATE_90_ANTICLOCKWISE = Dih4{0, -1, 1, 0};
const Dih4 Dih4::ROTATE_180 = Dih4{-1, 0, 0, -1};
const Dih4 Dih4::ROTATE_90_CLOCKWISE = Dih4{0, 1, -1, 0};
const Dih4 Dih4::REFLECT_VERTICAL = Dih4(-1, 0, 0, 1);
const Dih4 Dih4::REFLECT_FORWARD_DIAGONAL = Dih4(0, 1, 1, 0);
const Dih4 Dih4::REFLECT_HORIZONTAL = Dih4(1, 0, 0, -1);
const Dih4 Dih4::REFLECT_REVERSE_DIAGONAL = Dih4(0, -1, -1, 0);
