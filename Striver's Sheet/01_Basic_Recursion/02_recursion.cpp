/**
 * coded on: 09/06/2026 23:44
 * coded by: shubham.kandpal
 */

/**
 * a function calling itself until a specific condition is not met is called a recursive function
 */

#include <iostream>
using namespace std;

void print1toN(int cur, int n)
{
    if (cur > n)
        return;

    cout << cur << " ";

    // here the function is calling itself again and again until the condition
    // if (cur > n) is not met
    // so its a recursive function
    print1toN(cur + 1, n);
}

signed main()
{
    int n = 13;
    print1toN(1, n);
    cout << "\n";
}