/*
author:  rohitkotha10
created: 08.02.2024 22:40:54
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
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    int q;
    cin >> q;
    vector<pair<int, int>> queries(q);
    for (int i = 0; i < q; i++) cin >> queries[i].first >> queries[i].second;

    vector<int> ans(n);
    int las = -1;
    ans[0] = -1;

    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[i - 1]) {
            ans[i] = i - 1;
            las = i - 1;
        } else {
            ans[i] = las;
        }
    }

    // for (int i = 0; i < n; i++) cout << arr[i] << ' ';
    // cout << endl;

    // for (int i = 0; i < n; i++) cout << ans[i] << ' ';
    // cout << endl;

    for (int i = 0; i < q; i++) {
        if (ans[queries[i].second - 1] < queries[i].first - 1)
            cout << -1 << ' ' << -1 << endl;
        else
            cout << queries[i].second << ' ' << ans[queries[i].second - 1] + 1 << endl;
    }
    cout << endl;
}

signed main() {
    IOS;
    int t = 1;
    cin >> t;
    int org = t;
    while (t--) solve(org - t);
}
