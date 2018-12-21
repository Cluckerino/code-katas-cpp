#include <string>

std::string print_buddy_pair(long long num1, long long num2);
long long buddy_sum(long long num);

// Find the first number between start and limit that has a buddy. A number a has a buddy b if
// sum(proper divisors of a) - 1 = b and sum(proper divisors of b) - 1 = a.
std::string buddy(long long start, long long limit)
{
    return print_buddy_pair(0, 0);
}

// Print the pair of numbers.
std::string print_buddy_pair(long long num1, long long num2)
{
    return "(" + std::to_string(num1) + " " + std::to_string(num2) + ")";
}

// Find the sum of the proper divisors sans 1 of a given number
long long buddy_sum(long long num)
{
    auto sum = 0LL;
    // Look for factors and add. Start at 2 to skip 1.
    for (auto i = 2LL; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            // Add both factors to sum
            sum += i;
            sum += num / i;
        }
    }
    return sum;
}