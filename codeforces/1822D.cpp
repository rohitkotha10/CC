/*
author:  rohitkotha10
created: 25.04.2023 13:36:54
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
    if (n == 1)
        cout << 1 << endl;
    else if (n % 2 == 1)
        cout << -1 << endl;
    else {
        vector<int> rems(n);
        rems[0] = 0;
        for (int i = 1; i < n; i += 2) { rems[i] = n - (i + 1) / 2; }
        for (int i = 2; i < n; i += 2) { rems[i] = i / 2; }

        vector<int> ans(n);
        ans[0] = n;
        for (int i = 1; i < n; i++) {
            int temp = rems[i] - rems[i - 1];
            if (temp < 0) temp += n;
            ans[i] = temp;
        }
        // for (int i = 0; i < n; i++) cout << rems[i] << ' ';
        // cout << endl;
        for (int i = 0; i < n; i++) cout << ans[i] << ' ';
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
