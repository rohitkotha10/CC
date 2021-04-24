/*
author:  rohitkotha10
created: 23.04.2021 13:46:15
*/
#include <bits/stdc++.h>
using namespace std;

struct Point { int x, y; };

istream& operator>>(istream& is, Point& x)
{
    int xx, yy;
    is >> xx >> yy;
    x = Point{xx, yy};
    return is;
};