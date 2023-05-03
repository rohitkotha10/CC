/*
author:  rohitkotha10
created: 28.04.2023 03:15:26
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
    int n, k;
    cin >> n >> k;
    vector<int> arr(n + 1);
    for (int i = 1; i <= n; i++) cin >> arr[i];

    vector<int> ans;
    for (int i = 1; i <= n; i++) {
        if ((arr[i] - i) % k != 0) ans.push_back(i);
    }
    if (ans.size() == 0)
        cout << 0 << endl;
    else if (ans.size() == 2) {
        cout << 1 << endl;
    } else
        cout << -1 << endl;
}

signed main() {
    IOS;
    int t = 1;
    cin >> t;
    int org = t;
    while (t--) solve(org - t);
}
