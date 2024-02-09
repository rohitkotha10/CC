/*
author:  rohitkotha10
created: 08.02.2024 20:40:29
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
    string s;
    cin >> s;
    int fir = -1, las = -1;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'B') {
            fir = i;
            break;
        }
    }

    for (int i = n - 1; i >= 0; i--) {
        if (s[i] == 'B') {
            las = i;
            break;
        }
    }

    if (fir == -1 || las == -1)
        cout << 0 << endl;
    else
        cout << las - fir + 1 << endl;
}

signed main() {
    IOS;
    int t = 1;
    cin >> t;
    int org = t;
    while (t--) solve(org - t);
}
