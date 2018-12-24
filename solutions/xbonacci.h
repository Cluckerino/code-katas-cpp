#ifndef XBONACCI_H
#define XBONACCI_H

#include <algorithm>
#include <numeric>
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
        copy_n(begin(signature), n, back_inserter(result));
        return result;
    }

    // Copy the signature into the result
    copy(begin(signature), end(signature), back_inserter(result));

    // Define generator function that will accumulate the last x terms from the end of the result vector.
    auto nextTermGenerator = [&result, &bonacciLength]() {
        return accumulate(result.rbegin(), result.rbegin() + bonacciLength, 0);
    };

    // Generate the next n-x terms of the sequence and insert them at the end.
    generate_n(back_inserter(result), n - bonacciLength, nextTermGenerator);

    return result;
}
#endif /* XBONACCI_H */
