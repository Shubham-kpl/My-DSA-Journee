/**
 * coded on: 09/06/2026 23:44
 * coded by: shubham.kandpal
 */

/**
 * a function calling itself until a specific condition is not met is called a recursive function
 */

#include <iostream>
using namespace std;

void printNtimes(int x, int n)
{
    if (n <= 0)
    {
        return;
    }
    else
    {
        cout << x << " ";
        printNtimes(x, n - 1);
    }
}

signed main()
{
    int x = 6, n = 12;
    printNtimes(x, n);
    cout << "\n";
}