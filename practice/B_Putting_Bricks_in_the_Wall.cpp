#include <bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define endl '\n'
#define rep(i, start, endin, incre) for(int i = start; i <= endin; i += incre)
using namespace std;

/*
x x 0
x 0 1
0 1 F   only last 3x3 matter
*/
void solve()
{
    int n;
    cin >> n;
    vector<string> arr(n);
    rep(i, 0, n-1, 1)
    {
        cin >> arr[i];
    }

    char a13 = arr[n-3][n-1];
    char a22 = arr[n-2][n-2];
    char a23 = arr[n-2][n-1];
    char a31 = arr[n-1][n-3];
    char a32 = arr[n-1][n-2];

    //cout << 33 << a13 << endl << 3 << a22 << a23 << endl << a31 << a32 << 3 << endl;

    if(a13 == a22 && a22 == a31)
    {
        int ans = 0;
        if(a23 == a13) ans++;
        if(a32 == a13) ans++;
        cout << ans << endl;
        if(a23 == a13) cout << n-1 << ' ' << n << endl;
        if(a32 == a13) cout << n << ' ' << n-1 << endl;
        return;
    }

    if(a23 == a32)
    {
        int ans = 0;
        if(a13 == a32) ans++;
        if(a22 == a32) ans++;
        if(a31 == a32) ans++;
        cout << ans << endl;
        if(a13 == a32) cout << n-2 << ' ' << n << endl;
        if(a22 == a32) cout << n-1 << ' ' << n-1 << endl;
        if(a31 == a32) cout << n << ' ' << n-2 << endl;
        return;
    }

    if(a23 != a32)
    {
        if(a23 == '0')
        {
            int cnt = 0;
            if(a13 == '0') cnt++;
            if(a22 == '0') cnt++;
            if(a31 == '0') cnt++;
            if(cnt == 1)
            {
                cout << 2 << endl;
                cout << n << ' ' << n-1 << endl;
                if(a13 == '0') cout << n-2 << ' ' << n << endl;
                if(a22 == '0') cout << n-1 << ' ' << n-1 << endl;
                if(a31 == '0') cout << n << ' ' << n-2 << endl;
                return;
            }
            
        }

        if (a23 == '1')
        {
            //cout << "HERE" << endl;
            int cnt = 0;
            if(a13 == '1') cnt++;
            if(a22 == '1') cnt++;
            if(a31 == '1') cnt++;
            if(cnt == 1)
            {
                cout << 2 << endl;
                cout << n << ' ' << n-1 << endl;
                if(a13 == '1') cout << n-2 << ' ' << n << endl;
                if(a22 == '1') cout << n-1 << ' ' << n-1 << endl;
                if(a31 == '1') cout << n << ' ' << n-2 << endl;
                return;
            }
            
        }

        if (a32 == '1')
        {
            int cnt = 0;
            if(a13 == '1') cnt++;
            if(a22 == '1') cnt++;
            if(a31 == '1') cnt++;
            if(cnt == 1)
            {
                cout << 2 << endl;
                cout << n-1 << ' ' << n << endl;
                if(a13 == '1') cout << n-2 << ' ' << n << endl;
                if(a22 == '1') cout << n-1 << ' ' << n-1 << endl;
                if(a31 == '1') cout << n << ' ' << n-2 << endl;
                return;
            } 
        }

        if (a32 == '0')
        {
            int cnt = 0;
            if(a13 == '0') cnt++;
            if(a22 == '0') cnt++;
            if(a31 == '0') cnt++;
            if(cnt == 1)
            {
                cout << 2 << endl;
                cout << n-1 << ' ' << n << endl;
                if(a13 == '0') cout << n-2 << ' ' << n << endl;
                if(a22 == '0') cout << n-1 << ' ' << n-1 << endl;
                if(a31 == '0') cout << n << ' ' << n-2 << endl;
                return;
            } 
        }
    }

    cout << 0 << endl;


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
