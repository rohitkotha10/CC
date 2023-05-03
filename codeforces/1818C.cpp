/*
author:  rohitkotha10
created: 03.05.2023 15:16:55
*/
#include <bits/stdc++.h>
using namespace std;

#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0)
#define int long long

const int MAX = 2e5 + 5;
const int MOD = 1e9 + 7;

bool comp(const pair<int, int>& a, const pair<int, int>& b) {
    return a.first < b.first || (a.first == b.first && a.second < b.second);
}

signed main() {
    IOS;
    int n, q;
    cin >> n >> q;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    for (int i = 0; i < q; i++) {
        int l, r;
        cin >> l >> r;
        if (r - l + 1 <= 2)
            cout << r - l + 1 << endl;
        else { cout << -1 << endl; }
        // cout << 1 << endl;
    }
}
