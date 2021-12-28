#include "bits/stdc++.h"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
using namespace std;

int gift_min(vector<int> v)
{
    sort(v.begin(),v.end());
    return v[0];

}

void solve()
{
    string s;
    cin>>s;

    int n=s.length();
    vector<int> times;
    int add=0;

    int i=0;

    //cout<<"N: "<<n<<endl;

    while(i<n)
    {
        if(s[i]=='1')
        {
            while(s[i]=='1')
            {
                s[i]='0';
                i++;
                add++;
            }

            //cout<<"ADD: "<<add<<endl;

            times.push_back(add);
            add=0;
            i=0;
        }

        else i++;
    }


    int sum=0;

    sort(times.rbegin(),times.rend());

    for(int i=0;i<times.size();i+=2)
    {
        sum+=times[i];
    }


    cout<<sum<<endl;


}
    
   

signed main()
{
    IOS;
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}
