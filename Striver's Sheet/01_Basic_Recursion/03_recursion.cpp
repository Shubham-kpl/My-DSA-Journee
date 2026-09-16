/**
 * coded on: 09/06/2026 23:44
 * coded by: shubham.kandpal
 */

/**
 * a function calling itself until a specific condition is not met is called a recursive function
 */

#include <iostream>
using namespace std;

void printNto1(int n)
{
    if (n <= 0)
        return;

    cout << n << " ";

    // here the function is calling itself again and again until the condition
    // if (n <= 0) is not met
    // so its a recursive function
    printNto1(n - 1);
}

signed main()
{
    int n = 27;
    printNto1(n);
    cout << "\n";
}