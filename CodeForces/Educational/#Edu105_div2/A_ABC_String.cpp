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

    bool flag=1;
    int cnt;
    char flet,blet;

    if(s[0]==s[n-1]) flag=0;
    else
    {
        int cntstart=0;
        string abc="ABC";
        for(int i=0;i<3;i++)
        {
            if(s[0]==abc[i])
            {
                flet=abc[i];
                for(int j=0;j<n;j++)
                {
                    if(s[j]==abc[i])
                    {
                        s[j]='(';
                        cntstart++;
                    }
                }
            }
        }
        int cntback=0;
        for(int i=0;i<3;i++)
        {
            if(s[n-1]==abc[i])
            {
                blet=abc[i];
                for(int j=n-1;j>=1;j--)
                {
                    if(s[j]==abc[i])
                    {
                        s[j]=')';
                        cntback++;
                    }
                }
            }
        }
        if(cntstart>n/2) flag=0;

        if (flet==blet) flag=0;
        else 
        {   
            char remlet;
            for(int i=0;i<3;i++)
            {
                if(abc[i]!= flet && abc[i]!= blet)
                {
                    remlet=abc[i];
                    break;
                }
            }
             
            if(cntback>=cntstart)
            {
                for(int i=0;i<n;i++)
                {
                    if(s[i]==remlet)
                    {
                        s[i]='(';
                    }
                }
            }
            else if(cntback<cntstart)
            {
                for(int i=0;i<n;i++)
                {
                    if(s[i]==remlet)
                    {
                        s[i]=')';
                    }
                }
            }

        }   
        
    }
    int realcnt=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='(') realcnt++;
        if(s[i]==')' && realcnt>=0)
        {
            realcnt--;
            if(realcnt<0)
            {
                flag=0;
                break;
            }
        }
    }
    if(realcnt!=0) flag=0;
    if(flag) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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
