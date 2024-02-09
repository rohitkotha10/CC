/*
author:  rohitkotha10
created: 06.02.2024 17:58:47
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
    if (n <= 2) {
        for (int i = n; i >= 1; i--) cout << i << ' ';
        cout << endl;
    } else {
        vector<int> arr(n + 1);
        int pos = (n + 1) / 2;
        arr[1] = 2;
        arr[pos] = 1;
        arr[n] = 3;
        int cur = 4;
        for (int i = 1; i <= n; i++) {
            if (i == 1 || i == pos || i == n)
                continue;
            else {
                arr[i] = cur;
                cur++;
            }
        }

        for (int i = 1; i <= n; i++) cout << arr[i] << ' ';
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
