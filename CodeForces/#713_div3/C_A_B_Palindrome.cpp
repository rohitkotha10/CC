#include <bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define endl '\n'
#define rep(i, start, endin, incre) for(int i = start; i <= endin; i += incre)
using namespace std;

void solve()
{
    int a, b;
    cin >> a >> b;
    int n = a + b;
    string s;
    cin >> s;

    if(n == 1)
    {
        if(s[0] == '1' && a == 1)
        {
            cout << -1 << endl;
            return;
        }
        else if(s[0] == '0' && b == 1)
        {
            cout << -1 << endl;
            return;
        }

        else
        {
            if(a == 1) cout << '0' << endl;
            else cout << '1' << endl;
            return;
        }

    }

    rep(i, 0, (n/2) - 1, 1)
    {
        if(s[i] == '0')
        {
            if(s[n-1-i] == '?' || s[n-i-1] == '0') s[n-i-1] = '0';
            else
            {
                cout << -1 << endl;
                return;
            }
        } 
        if(s[i] == '1')
        {
            if(s[n-1-i] == '?' || s[n-i-1] == '1') s[n-i-1] = '1';
            else
            {
                cout << -1 << endl;
                return;
            }
        } 
    }
    reverse(s.begin(), s.end());

    rep(i, 0, (n/2) - 1, 1)
    {
        if(s[i] == '0')
        {
            if(s[n-1-i] == '?' || s[n-i-1] == '0') s[n-i-1] = '0';
            else
            {
                cout << -1 << endl;
                return;
            }
        } 
        if(s[i] == '1')
        {
            if(s[n-1-i] == '?' || s[n-i-1] == '1') s[n-i-1] = '1';
            else
            {
                cout << -1 << endl;
                return;
            }
        } 
    }
    rep(i, 0, n - 1, 1)
    {
        if(n%2 == 0)
        {
            if(s[i] == '0') a--;
            else if(s[i] == '1') b--;
        }
        if(n%2 == 1)
        {
            if(i != n/2)
            {
                if(s[i] == '0') a--;
                else if(s[i] == '1') b--;
            }
        } 
    }

    if(a < 0 || b < 0)
    {
        cout << -1 << endl;
        return;
    }

    rep(i, 0, (n/2) - 1, 1)
    {
        //cout << "S " << s << endl;
        //cout << i << " H " << a << ' ' << b << endl;
        if(s[i] == '?')
        {
            if(a >= b)
            {
                s[i] = '0';
                if(s[n-i-1] == '0') a--;
                else
                {
                    s[n-i-1] = '0';
                    a -= 2;
                }
                
                if(a < 0)
                {
                    cout << -1 << endl;
                    return;
                }
            }
            else
            {
                s[i] = '1';
                if (s[n-i-1] == '1') b--;
                else
                {
                    s[n-i-1] = '1';
                    b -= 2;
                }
                if(b < 0)
                {
                    cout << -1 << endl;
                    return;
                }
            }
        }
    }

    reverse(s.begin(), s.end());

    rep(i, 0, (n/2) - 1, 1)
    {
        if(s[i] == '?')
        {
            if(a >= b)
            {
                s[i] = '0';
                if(s[n-i-1] == '0') a--;
                else
                {
                    s[n-i-1] = '0';
                    a -= 2;
                }
                if(a < 0)
                {
                    cout << -1 << endl;
                    return;
                }
            }
            else
            {
                s[i] = '1';
                if (s[n-i-1] == '1') b--;
                else
                {
                    s[n-i-1] = '1';
                    b -= 2;
                }
                if(b < 0)
                {
                    cout << -1 << endl;
                    return;
                }
            }
        }
    }
    
   

    if(n%2 == 1)
    {
        char c = s[n/2];
        if(c == '0' && b == 1)
        {
            cout << -1 << endl;
            return;
        }
        else if(c == '1' && a == 1)
        {
            cout << -1 << endl;
            return;
        }
        else
        {
            if(a == 1)
            {
                a--;
                s[n/2] = '0';
            }
            else
            {
                b--;
                s[n/2] = '1';
            }
        }
    }

    if(a < 0 || b < 0)
    {
        cout << -1 << endl;
        return;
    }
    
    cout << s << endl;

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
