/*
author:  rohitkotha10
created: 20.04.2023 20:06:08
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
    string s;
    cin >> s;
    if (s[0] == '0')
        cout << 0 << endl;
    else {
        vector<int> ans(s.length());
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '?') {
                if (i == 0)
                    ans[i] = 9;
                else
                    ans[i] = 10;
            } else
                ans[i] = 1;
        }
        int cnt = 1;
        for (int i = 0; i < ans.size(); i++) { cnt *= ans[i]; }
        cout << cnt << endl;
    }
}

signed main() {
    IOS;
    int t = 1;
    cin >> t;
    int org = t;
    while (t--) solve(org - t);
}
