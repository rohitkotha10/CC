/*
author:  rohitkotha10
created: 19.02.2024 20:05:29
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
    int a = 0, b = 0;
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'A')
            a++;
        else
            b++;
    }

    if (a > b)
        cout << "A" << endl;
    else
        cout << "B" << endl;
}

signed main() {
    IOS;
    int t = 1;
    cin >> t;
    int org = t;
    while (t--) solve(org - t);
}
