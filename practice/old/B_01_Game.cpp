#include "bits/stdc++.h"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define endl '\n'
using namespace std;

void solve()
{
    string s;
    cin>>s;

    int n=s.length();

    int cnt=0;

    for(int i=1;i<n;i++)
    {
        if(s[i]!=s[i-1] && s[i]!= 'x' && s[i-1]!='x')
        {
            cnt++;
            if(i==1)
            {
                s[i]='x';
                s[i-1]='x';
            }
            else
            {
                s[i]='x';
                s[i-1]='x';
                for(int j=i;j>=0;j--)
                {
                    if(s[j]!='x')
                    {
                        if(j==0)
                        {
                            swap(s[j],s[i]);
                            break;
                        }
                        swap(s[j],s[i]);
                        swap(s[j-1],s[i-1]);
                        break;
                    }
                }
            }
            cout<<"CHANCE: "<<cnt<<' '<<s<<endl;
        }
    }

    if(cnt%2==1) cout<<"DA"<<endl;
    else cout<<"NET"<<endl;

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
