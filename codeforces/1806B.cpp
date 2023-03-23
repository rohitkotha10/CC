/*
author:  rohitkotha10
created: 18.03.2023 17:44:41
*/
#include <bits/stdc++.h>
using namespace std;

#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0)
#define int long long

const int MAX = 2e5 + 5;
const int MOD = 1e9 + 7;

void solve() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    int cnt = 0;
    for (int i = 0; i < n; i++)
        if (arr[i] == 0) cnt++;
    if (cnt <= (n + 1) / 2) {
        cout << 0 << endl;
    } else {
        int flag1 = 0;
        int flagnon1 = 0;
        for (int i = 0; i < n; i++) {
            if (arr[i] == 1 && flag1 == 0) { flag1 = 1; }
            if (arr[i] > 1 && flagnon1 == 0) { flagnon1 = 1; }
        }

        if (flag1 == 1 && flagnon1 == 0)
            cout << 2 << endl;
        else
            cout << 1 << endl;
    }
}

signed main() {
    IOS;
    int t = 1;
    cin >> t;
    while (t--) solve();
}
