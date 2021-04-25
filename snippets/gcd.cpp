/*
author:  rohitkotha10
created: 23.04.2021 13:46:18
*/

int gcd(int a, int b)
{
    if(b == 0) return a;
    return gcd(b, a % b);
}