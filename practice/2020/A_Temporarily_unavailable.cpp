#include "bits/stdc++.h"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define endl '\n'
using namespace std;

void solve()
{
    int aa, bb, cc, r;
    cin >> aa >> bb >> cc >> r;

    vector<int> arr{aa,bb,cc};
    sort(arr.begin(),arr.end());
    int a, b, c;
    if(arr[1]==cc)
    {
        a = arr[0];
        c = arr[1];
        b = arr[2];

        if(c-r >= a && c+r <= b) cout << b-a-2*r << endl;
        else if(c-r <= a && c+r >= b) cout << 0 << endl;
        else if(c-r >= a && c+r >= b) cout << c-r-a << endl;
        else if(c-r <= a && c+r <= b) cout << b-c-r << endl;
        else cout << "NO" << endl;
    }

    else if(arr[0]==cc)
    {
        c = arr[0];
        a = arr[1];
        b = arr[2];

        if(c+r <= a) cout << b-a << endl;
        else if( c+r >= b) cout << 0 <<endl;
        else cout << b-c-r << endl;
    }

    else
    {
        a = arr[0];
        b = arr[1];
        c = arr[2];

        if(c-r >= b) cout << b-a << endl;
        else if(c-r <= a) cout << 0 << endl;
        else cout << c-r-a << endl;
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
