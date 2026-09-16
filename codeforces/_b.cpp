/**
 * coded on: 08/09/2026 20:23
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
    int x, y, k;
    cin >> x >> y >> k;

    int ans = 0;

    for (int i = x, j = y, itr = 0; itr < min(k, y - 2 * x + 1); i++, j++, itr++)
    {
        ans += j % i;
    }

    if (k > y - 2 * x + 1)
    {
        ans += (k - y + 2 * x - 1) * (y - x);
    }

    cout << ans << endl;
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