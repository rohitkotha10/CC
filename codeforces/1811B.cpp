/*
author:  rohitkotha10
created: 04.04.2023 20:23:26
*/
#include <bits/stdc++.h>
using namespace std;

#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0)
#define int long long

const int MAX = 2e5 + 5;
const int MOD = 1e9 + 7;

int findRing(int x1, int x2, int n) {
    int x1match = n + 1 - x1;
    int x2match = n + 1 - x2;

    return min(min(x1, x2), min(x1match, x2match));
}
void solve(int testCase) {
    int n, x1, y1, x2, y2;
    cin >> n >> x1 >> y1 >> x2 >> y2;
    
    cout << abs(findRing(x1, y1, n) - findRing(x2, y2, n)) << endl;
}

signed main() {
    IOS;
    int t = 1;
    cin >> t;
    int org = t;
    while (t--) solve(org - t);
}
