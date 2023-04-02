/*
author:  rohitkotha10
created: 02.04.2023 20:12:14
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

    int check = s[0] - 'a';
    int minind = -1;
    for (int i = 1; i < n; i++) {
        int temp = s[i] - 'a';
        if (temp <= check) {
            minind = i;
            check = temp;
        }
    }

    if (minind == -1) {
        cout << s << endl;
    } else {
        cout << s[minind];
        for (int j = 0; j < minind; j++) cout << s[j];
        for (int j = minind + 1; j < n; j++) cout << s[j];
        cout << endl;
    }
}

signed main() {
    IOS;
    int t = 1;
    cin >> t;
    int org = t;
    while (t--) solve(org - t);
}
