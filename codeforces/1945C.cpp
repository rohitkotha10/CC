/*
author:  rohitkotha10
created: 19.03.2024 13:55:42
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
    string arr;
    cin >> arr;
    vector<int> zerosArr(n + 1, 0);
    vector<int> onesArr(n + 1, 0);
    if (arr[0] == '0') {
        zerosArr[1] = 1;
        onesArr[1] = 0;
    } else {
        zerosArr[1] = 0;
        onesArr[1] = 1;
    }
    for (int i = 2; i <= n; i++) {
        zerosArr[i] = zerosArr[i - 1];
        onesArr[i] = onesArr[i - 1];
        if (arr[i - 1] == '0')
            zerosArr[i]++;
        else
            onesArr[i]++;
    }

    // for (int i = 1; i <= n; i++) cout << zerosArr[i] << ' ';
    // cout << endl;
    // for (int i = 1; i <= n; i++) cout << onesArr[i] << ' ';
    // cout << endl;

    int ans = MOD;
    int index = -1;
    for (int i = 0; i <= n; i++) {
        int cur = abs(n - 2 * i);
        if (2 * zerosArr[i] >= i && 2 * (onesArr[n] - onesArr[i]) >= n - i) {
            if (cur < ans) {
                ans = cur;
                index = i;
            }
        }
    }
    cout << index << endl;
}

signed main() {
    IOS;
    int t = 1;
    cin >> t;
    int org = t;
    while (t--) solve(org - t);
}
