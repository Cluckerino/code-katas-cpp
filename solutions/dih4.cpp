#include "dih4.h"

std::ostream &operator<<(std::ostream &os, const Dih4 &dih4)
{
    os << std::endl;
    os << "[[" << dih4.matrix[0][0] << " " << dih4.matrix[0][1] << "]" << std::endl;
    os << " [" << dih4.matrix[1][0] << " " << dih4.matrix[1][1] << "]]" << std::endl;
    return os;
}