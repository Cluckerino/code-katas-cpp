#ifndef COUNT_POS_SUM_NEG_H
#define COUNT_POS_SUM_NEG_H

#include <vector>

// Given a list of numbers, count the number of positive numbers and sum the negative numbers.
std::vector<int> countPositivesSumNegatives(std::vector<int> input)
{
    if (input.empty()) return input;
    auto count = 0, sum = 0;
    for (auto & num : input)
    {
        if (num > 0) ++count;
        else if (num < 0) sum += num;
    }
    return std::vector<int> {count, sum};
}

#endif /* COUNT_POS_SUM_NEG_H */
