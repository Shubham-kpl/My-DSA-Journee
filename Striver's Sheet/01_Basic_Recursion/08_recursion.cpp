/**
 * coded on: 14/06/2026 01:24
 * coded by: shubham.kandpal
 */

#include "bits/stdc++.h"
using namespace std;

void printNTimes(string str, int cnt)
{
    if (cnt <= 0)
        return;

    cout << str << "\n";
    printNTimes(str, cnt - 1);
}

int main()
{
    int n = 27;
    printNTimes("Love you bro!", n);
    return 0;
}