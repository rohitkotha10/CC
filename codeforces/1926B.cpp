/*
author:  rohitkotha10
created: 19.02.2024 20:07:37
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
    vector<string> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n; j++) {
            if (arr[i][j] == '1') {
                if (arr[i][j + 1] == '1' && arr[i + 1][j] == '1' && arr[i + 1][j + 1] == '1') {
                    cout << "SQUARE" << endl;
                } else
                    cout << "TRIANGLE" << endl;
                return;
            }
        }
    }
}

signed main() {
    IOS;
    int t = 1;
    cin >> t;
    int org = t;
    while (t--) solve(org - t);
}
