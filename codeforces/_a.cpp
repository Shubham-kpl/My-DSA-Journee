/**
 * coded on: 08/09/2026 20:13
 * coded by: shubham.kandpal
 */

#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define vvi vector<vector<int>>
#define sv(vctr) sort(vctr.begin(), vctr.end())
#define f(i, x, y) for (int i = x; i <= y; ++i)
#define fr(i, x, y) for (int i = x; i >= y; --i)

void printArray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

void solve()
{
    int n;
    cin >> n;
    vi a(n);
    int z = 0;
    f(i, 0, n - 1)
    {
        cin >> a[i];
        if (a[i] == 0)
            z++;
    }

    if (z < 2)
        cout << -1 << endl;
    else
    {
        cout << 2 - (a[0] == 0) - (a[n - 1] == 0) << endl;
    }
}

signed main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}