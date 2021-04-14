#include "bits/stdc++.h"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define endl '\n'
using namespace std;

//overflowed, time exceeded, space exceeded.
int gcd(int a, int b)
{
    if(b == 0) return a;
    return gcd(b, a%b);
}
 
int lcm(int a,int b)
{
    return (a / gcd(a, b)) * b;
}

//no test case
int min_v(int a, int b)
{
    if(a < b) return a;
    return b;
};

void solve()
{
    int n, m, k;
    cin >> n >> m >> k;
    int time = 0;
    time = lcm(n, m);
    vector<int> va(n);
    vector<int> vb(m);
    for(int i = 0; i < n;i++) cin >> va[i];
    for(int i = 0; i < m;i++) cin >> vb[i];


    int cnt = 0;

    for(int i = 1;i <= time ;i++)
    {
        if( va[(i-1)%n] != vb[(i-1)%m]  )
        {
            cnt++;
        }

        if(cnt == k)
        {
            cout << i << endl;
            return;
        }
    }

    if(k%cnt == 0 )
    {
        cout << time  * k/cnt <<endl;
        return;
    }

    time = time * floor(double(k)/double(cnt));
    cnt = cnt * floor(double(k)/double(cnt));

    
    for(int i = 1;i <= lcm(n,m) ;i++)
    {
        if( va[(i-1)%n] != vb[(i-1)%m]  )
        {
            cnt++;
        }
        time++;
        //cout <<cnt<<endl; 

        if(cnt == k)
        {
            cout << time << endl;
            return;
        }
    }


}

   

signed main()
{
    IOS;
    int t=1;
    //cin>>t;
    while(t--)
    {
        cout  << 488765 * 489117;
    }
}
