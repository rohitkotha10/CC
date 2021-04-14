#include "bits/stdc++.h"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define endl '\n'
using namespace std;


int min_v(int a, int b)
{
    if(a < b) return a;
    return b;
};

void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    vector<int> sol(n,0);
    for(int i = 0; i < n;i++) cin >> arr[i];

    
    int map = 0;
    reverse(arr.begin(), arr.end());
    for(int i = 0;i < n; i++)
    {
        if(arr[i] > 0)
        {
            //cout  << i << ' ' << min_v(i+arr[i]-1,n) << endl;
            for(int j = max(i, map); j <= min_v(i+arr[i]-1,n-1); j++)
            {
                sol[j] = 1;
                map = i+arr[i]-1;
            } 
        }
    }
    for(int i = n-1;i >=0; i--) cout << sol[i] << ' ';
    cout << endl;

}

   

signed main()
{
    IOS;
    int t=1;
    cin>>t;
    while(t--)
    {
        solve();
    }
}
