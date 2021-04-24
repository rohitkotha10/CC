/*
author:  rohitkotha10
created: 23.04.2021 13:46:18
*/
#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if(b == 0) return a;
    return gcd(b, a % b);
}

int main()
{
    cout << 3 << endl;
    cout << gcd(6, 4) << endl;
}