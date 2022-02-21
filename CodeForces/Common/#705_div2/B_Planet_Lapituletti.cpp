#include "bits/stdc++.h"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define endl '\n'
using namespace std;

int invert(int c)
{
    if(c>=10)
    {
        int a=c%10;
        if(a==1) a=1;
        else if(a==2) a=5;
        else if(a==5) a=2;
        else if(a==8) a=8;
        else if(a==0) a=0;

        int b=floor(double(c)/10.0);
        if(b==1) b=1;
        else if(b==2) b=5;
        else if(b==5) b=2;
        else if(b==8) b=8;
        else if(b==0) b=0;


        c = (a*10) + (b);
        return c;
    }

    if(c==1) c=10;
    else if(c==2) c=50;
    else if(c==5) c=20;
    else if(c==8) c=80;
    else if(c==0) c=0;
    return c;
    
    
}

bool reflectable(int c)
{
    int a=c%10;
    switch (a)
    {
        case 3: case 4: case 6: case 7: case 9:
        return false;
    }
    int b=floor(double(c)/10.0);
    switch (b)
    {
        case 3: case 4: case 6: case 7: case 9:
        return false;
    }

    return true;

}


bool valid(int a,int b, int hmax, int mmax)
{
    if( !reflectable(a) || !reflectable(b)  ) return false;
    if(invert(b)>=hmax || invert(a)>=mmax) return false;
    return true;
}

void solve()
{
    int hmax, mmax;
    cin >> hmax >> mmax;
    string s;
    cin>>s;
    bool flag=0;

    int oldh=(s[0]-'0') * 10 + (s[1]-'0');
    int oldm=(s[3]-'0') * 10 + (s[4]-'0');

    while(true)
    {
        if(valid(oldh,oldm,hmax,mmax))
        {
            flag=1;
            break;
        }
        oldm++;
        if(oldm==mmax)
        {
            oldm=0;
            oldh++;
        }

        if(oldh==hmax)
        {
            oldh=0;
            hmax=0;
            break;
        }
    }
    signed a=oldh;
    signed b=oldm;
    printf("%02d:",a);
	printf("%02d\n",b);

    


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
