/*
author:  rohitkotha10
created: 31.03.2023 20:10:05
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
    if (n % 2 == 0)
        cout << -1 << endl;
    else {
        vector<int> ans;
        while (n > 0) {
            int op1 = (n + 1) / 2;
            int op2 = (n - 1) / 2;
            if (op1 == 1) {
                ans.push_back(1);
                break;
            } else if (op2 == 1) {
                ans.push_back(2);
                break;
            }

            if (op1 % 2 == 1) {
                ans.push_back(1);
                n = op1;
            } else if (op2 % 2 == 1) {
                ans.push_back(2);
                n = op2;
            } else {
                cout << -2 << endl;
                return;
            }
        }
        cout << ans.size() << endl;
        for (int i = ans.size() - 1; i >= 0; i--) { cout << ans[i] << ' '; }
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
