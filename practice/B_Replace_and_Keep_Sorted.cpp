#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n,q,k,l,r;
    cin>>n>>q>>k;
    int sum=0;
    vector<int> a(n+1);
    for(int i=1;i<=n;i++) cin>>a[i];
    while(q--)
    {
        cin>>l>>r;
        if(r-l>1)
        {
            for(int i=l+1;i<r;i++)
            {
                int req=a[i+1]-a[i-1]-2;
                sum+=req;
            }
        }
        int extr=k-a[r-1]+a[l+1]-3;
        sum=sum+extr;
        cout<<sum<<endl;
        sum=0;
    }
}
