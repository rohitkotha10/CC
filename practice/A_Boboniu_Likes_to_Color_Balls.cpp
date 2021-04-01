#include "bits/stdc++.h"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define endl '\n'
#define rep(i,start,endin,incre) for(int i = start; i < endin; i+= incre)
using namespace std;

void solve()
{
    int r, g, b, w;
    cin >> r >> g >> b >> w;

    vector<int> arr;
    arr.push_back(r);
    arr.push_back(g);
    arr.push_back(b);
    arr.push_back(w);

    int flag = 2;

    int sum = r+g+b+w;
    if(sum%2 == 0)
    {
        rep(i,0,4,1)
        {
            if(arr[i]%2 != 0)
            {
                flag = 1;
                break;
            }
        }
        arr[0]--;
        arr[1]--;
        arr[2]--;
        arr[3]+=3;

        if(flag == 1)
        {
            rep(i,0,4,1)
            {
                if(arr[i]%2 != 0)
                {
                    flag = 0;
                    break;
                }
            }
        }
    }

    else
    {
        int cnt = 0;
        flag = 0;
        rep(i,0,4,1)
        {
            if(arr[i]%2 != 0)
            {
                cnt++;
            }
        }

        if(cnt == 1) flag = 1;
        else
        {
            arr[0]--;
            arr[1]--;
            arr[2]--;
            arr[3]+=3;

            

            cnt = 0;
            rep(i,0,4,1)
            {
                if(arr[i]%2 != 0)
                {
                   cnt++;
                }
            }

            if(cnt == 1) flag = 2;

            rep(i,0,4,1)
            {
                if(arr[i] < 0) flag = 0;
            }
        }
    }



    flag ? cout << "Yes" << endl : cout << "No" << endl;
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
