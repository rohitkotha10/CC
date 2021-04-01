#include "bits/stdc++.h"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define endl '\n'
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i <n; i++) cin >> arr[i];
    vector<int> stor;

    sort(arr.begin(),arr.end());

    cout << arr[0] << ' ';

    for(int i = 1;i < n;i++)
    {
        if(arr[i] == arr[i-1]) stor.push_back(arr[i]);
        else cout << arr[i] << ' ';
    }
    for(int i = 0;i < stor.size(); i++) cout << stor[i] << ' ';
    cout << endl;




}
   

signed main()
{
    IOS;
    int t=1;
    cin >> t;
    while(t--)
    {
        solve();
    }
}
