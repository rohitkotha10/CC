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
    for(int i = 0; i < n; i++) cin >> arr[i];

    int a = 0;
    int b = 0;
    int c = 0;
    for(int i = 0; i < n; i++)
    {
        if(arr[i]%3 == 0) a++;
        if(arr[i]%3 == 1) b++;
        if(arr[i]%3 == 2) c++;
    }

    int cnt = 0;
    while(true)
    {
        if(a > n/3)
        {
            cnt += a-n/3;
            b = b+a-n/3;
            a = n/3;
        }
        if(b > n/3)
        {
            cnt += b-n/3;
            c = c+b-n/3;
            b = n/3;
        }

        if(c > n/3)
        {
            cnt += c-n/3;
            a = a+c-n/3;
            c = n/3;

        }


        if(a==b && b==c)
        {
            cout << cnt << endl;
            return;
        }
    }


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
