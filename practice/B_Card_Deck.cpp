#include <bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define endl '\n'
#define rep(i, start, endin, incre) for(int i = start; i <= endin; i += incre)
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    rep(i, 0, n - 1, 1) cin >> arr[i];

    list<int>  sol;
    list<int>::iterator maxp;
    list<int>::iterator oldp;
    list<int>::iterator midp;
    sol.push_back(arr[0]);
    int maxval = arr[0];
    maxp = sol.begin();
    oldp = sol.begin();


    int flag = 1;
    rep(i, 1, n-1, 1)
    {
        maxval = max(maxval, arr[i]);
        if(arr[i] < maxval)
        {
            if(flag == 0)
            {
                sol.insert(oldp, arr[i]);
                continue;
            }
            sol.push_back(arr[i]);
        }
        else
        {
            sol.push_front(arr[i]);
            oldp = maxp;
            maxp = sol.begin();
            flag = 0;
        }
    }

    for( auto it = sol.begin(); it != sol.end(); it++ )
    {
        cout << *it << ' ';
    }
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
