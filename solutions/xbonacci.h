#include <algorithm>
#include <vector>

// Given a signature of the first x-terms of an x-bonacci sequence, continue the sequence up to the
// n-th term.
std::vector<int> xbonacci(std::vector<int> signature, int n)
{
    std::vector<int> result;
    auto bonacciLength = signature.size();

    // If n is less than the signature, don't bother with iterating, just take the first n terms.
    if (n < bonacciLength)
    {
        std::copy_n(begin(signature), n, std::back_inserter(result));
        return result;
    }
    return std::vector<int>{};
}