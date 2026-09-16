/**
 * coded on: 05/09/2026 20:18
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
    int n, p;
    cin >> n >> p;
    string s;
    cin >> s;

    int ans=0;
    for(int i=0;i<n;i+=p) {
        int flg=0;
        for(int j=i;j<i+p;j++) {
            if(s[j]=='0'){flg=1;break;}
        }
        if(!flg) ans++;
    }
    cout<<ans<<endl;
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