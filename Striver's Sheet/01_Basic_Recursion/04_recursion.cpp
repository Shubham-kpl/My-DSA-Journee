/**
 * coded on: 09/06/2026 23:54
 * coded by: shubham.kandpal
 */

/**
 * sum of first n numbers using recursion
 *
 * so a self calling function with some condition of stoppage
 */

#include <iostream>
using namespace std;

int Add1ToN(int cur, int n)
{
    if (cur > n)
        return 0;

    int acc = cur + Add1ToN(cur + 1, n);
    return acc;
}

signed main()
{
    int n = 100;
    int sum = Add1ToN(1, n);
    cout << sum << "\n";
}