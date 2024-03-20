/*
author:  rohitkotha10
created: 19.03.2024 13:05:41
*/
#include <bits/stdc++.h>
using namespace std;

#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0)
#define int long long

const int MAX = 2e5 + 5;
const int MOD = 1e9 + 7;

void solve(int testCase) {
    int n;
    cin >> n;
    string up, down;
    cin >> up >> down;

    int cnt = 1;
    int las = 0;
    for (int i = 1; i < n; i++) {
        // cout << i << ' ' << cnt << ' ' << up.substr(i, n - i) << ' ' << down.substr(i - 1, n - i) << endl;
        if (up[i] == down[i - 1])
            cnt++;
        else if (up[i] > down[i - 1])
            break;
        else
            las = i, cnt = 1;
    }
    cout << up.substr(0, las + 1) + down.substr(las, n - las) << endl;
    cout << cnt << endl;
}

signed main() {
    IOS;
    int t = 1;
    cin >> t;
    int org = t;
    while (t--) solve(org - t);
}
