/**
 * coded on: 10/06/2026 00:28
 * coded by: shubham.kandpal
 */

/**
 * fibonacci series
 *
 * f(x) = f(x-1) + f(x-2)
 *
 * run until, x = 0 and x = 1, that's it
 */

#include "bits/stdc++.h"
using namespace std;

int printFibonacci(int n)
{
    // Base conditions
    if (n <= 0)
        return 0;
    if (n == 1 || n == 2)
        return 1;

    int acc = printFibonacci(n - 1) + printFibonacci(n - 2);
    return acc;
}

signed main()
{
    int n = 10;

    for (int i = 1; i <= n; i++)
    {
        cout << printFibonacci(i) << " ";
    }

    // int x = 0, y = 1;

    // for (int i = 1; i <= n; i++)
    // {
    //     cout << x + y << " ";
    //     int temp = x + y;
    //     x = y, y = temp;
    // }

    cout << endl;
}

// 1 1 2 3 6 12 24 48 96 192