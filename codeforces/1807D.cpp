/*
author:  rohitkotha10
created: 26.03.2023 10:09:44
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
    int n, q;
    cin >> n >> q;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    vector<int> subleft(n + 1, 0);
    for (int i = 1; i <= n; i++) { subleft[i] = subleft[i - 1] + arr[i - 1]; }
    vector<int> subright(n + 1, subleft.back());
    for (int i = 1; i <= n; i++) { subright[i] = subright[i - 1] - arr[i - 1]; }

    // for (int i = 0; i < n + 1; i++) cout << subleft[i] << ' ';
    // cout << endl;
    // for (int i = 0; i < n + 1; i++) cout << subright[i] << ' ';
    // cout << endl;

    for (int i = 0; i < q; i++) {
        int l, r, k;
        cin >> l >> r >> k;
        int sum = subleft[l - 1] + subright[r] + k * (r - l + 1);
        // cout << subleft[l - 1] << ' ' << subright[r] << ' ' << k << ' ';
        cout << (sum % 2 == 1 ? "YES" : "NO") << endl;
    }
}

signed main() {
    IOS;
    int t = 1;
    cin >> t;
    int org = t;
    while (t--) solve(org - t);
}
