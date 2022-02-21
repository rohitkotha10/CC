#include "bits/stdc++.h"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define endl '\n'
using namespace std;

void solve()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    sort(arr.begin(),arr.end());
    if(arr[0]!=0)
    {
        cout<<0<<endl;
        return;
    }


    int mexa=0;
    int mexb=0;

    multiset<int> arrset;
    for(int i=0;i<n;i++)
    {
        arrset.insert(arr[i]);
    }

    for(int i=0;i<130;i++)
    {
        if(arrset.count(i)>=2) continue;
        if(arrset.count(i)==1)//0012 1 and 3
        {
            mexa=i;
            for(int j=i+1;j<130;j++)
            {
                if(arrset.count(j)==0)
                {
                    mexb=j;
                    break;
                }
            }
            break;
        }
        if(arrset.count(i)==0)
        {
            mexa=i;
            mexb=i;
            break;
        }
    }

    cout<<mexa+mexb<<endl;
    


    

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
