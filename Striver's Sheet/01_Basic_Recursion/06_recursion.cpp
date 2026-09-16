/**
 * coded on: 10/06/2026 00:05
 * coded by: shubham.kandpal
 */

/**
 * reverse an array using recursion
 *
 * swap the two extremes and repeatedly come towards middle of the array (repeated function call)
 *
 * do this until you reach the exact middle, or the left surpasses the right (condition)
 */

#include "bits/stdc++.h"
using namespace std;

void printArray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

void reverseArray(int *arr, int s, int e)
{
    if (s >= e)
        return;

    swap(arr[s], arr[e]);
    reverseArray(arr, s + 1, e - 1);
}

signed main()
{
    int arr[] = {1, 6, 7, 3, -9, 0, 2};
    int n = sizeof(arr) / sizeof(int);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << "\n";

    reverseArray(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}