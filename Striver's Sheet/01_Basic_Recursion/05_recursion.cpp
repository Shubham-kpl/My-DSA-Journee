/**
 * coded on: 09/06/2026 23:58
 * coded by: shubham.kandpal
 */

/**
 * calculating factorial using a recursive function
 *
 * repeating function call
 *
 * f(x) = x * f(x-1), until x >= 1
 */

#include <iostream>
using namespace std;

int factorialN(int n)
{
    if (n <= 0)
        return 1;

    // factorial function being called from inside itself
    // hence, recursise function
    int acc = n * factorialN(n - 1);
    return acc;
}

signed main()
{
    int n = 7;
    int ans = factorialN(n);
    cout << ans << "\n";
}