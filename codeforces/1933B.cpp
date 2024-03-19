/*
author:  rohitkotha10
created: 14.03.2024 17:58:44
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

    int sum = 0;
    int flag = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
        if (arr[i] % 3 == 1) flag = 1;
    }

    if (sum % 3 == 0)
        cout << 0 << endl;
    else if (sum % 3 == 2)
        cout << 1 << endl;
    else if (sum % 3 == 1) {
        if (flag == 1)
            cout << 1 << endl;
        else
            cout << 2 << endl;
    }
}

signed main() {
    IOS;
    int t = 1;
    cin >> t;
    int org = t;
    while (t--) solve(org - t);
}
