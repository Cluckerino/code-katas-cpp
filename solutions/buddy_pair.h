#include <string>

std::string print_buddy_pair(long long num1, long long num2);
long long buddy_sum(long long num);

// Find the first number between start and limit that has a buddy. A number a has a buddy b if
// sum(proper divisors of a) - 1 = b and sum(proper divisors of b) - 1 = a. Buddies (n, m) of
// interest have start <= n <= limit, and m > n.
std::string buddy(long long start, long long limit)
{
    for (auto n = start; n <= limit; n++)
    {
        auto m = buddy_sum(n);

        // Reject if less than or equal to n
        if (m <= n)
            continue;

        if (buddy_sum(m) == n)
            return print_buddy_pair(n, m);
    }
    return "Nothing";
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