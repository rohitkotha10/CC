/*
author:  rohitkotha10
created: 24.06.2021 13:14:53
*/
#include <bits/stdc++.h>
using namespace std;

#define int long long

const int MAX = 2e5 + 5;
const int MOD = 1e9 + 7;

signed main()
{
    int n = 1e6;
    int queries = 25;
    int fir = 1;
    int las = 1e6;

    while (queries > 0)
    {
        cout << n << endl;
        string res;
        cin >> res;

        if (res == "<")
        {
            las = n;
            n = (fir + las) / 2;
        }
        else
        {
            //cout << fir << ' ' << las << ' ' << n << endl;
            fir = n;
            n = (fir + las) / 2;
        }

        if (n == fir || n == las)
        {
            cout << fir << endl;
            cin >> res;
            cout << "! " << (res == ">=" ? fir : las) << endl;
            return 0;
        }

        queries--;
        //cout << fir << ' ' << las << ' ' << 25 - queries << endl;
    }
}
/* 
<
<
<
<
<
<
<
<
<
<
<
<
<
<
<
>=
<
>=
>=
<
>=









1000000
500000
250000
125000
62500
31250
15625
7813
3907
1954
977
489
245
123
62
31
46
38
42
44
43
43
! 43
*/