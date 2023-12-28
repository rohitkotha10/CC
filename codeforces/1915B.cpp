/*
author:  rohitkotha10
created: 28.12.2023 20:09:25
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
    vector<string> arr(3);
    for (int i = 0; i < 3; i++) cin >> arr[i];

    int curi = -1, curj = -1;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (arr[i][j] == '?') {
                curi = i;
                curj = j;
            }
        }
    }

    int a = 0, b = 0, c = 0;
    for (int i = 0; i < 3; i++) {
        if (arr[curi][i] == 'A') a = 1;
        if (arr[curi][i] == 'B') b = 1;
        if (arr[curi][i] == 'C') c = 1;
    }

    if (a == 0)
        cout << 'A' << endl;
    else if (b == 0)
        cout << 'B' << endl;
    else
        cout << 'C' << endl;
}

signed main() {
    IOS;
    int t = 1;
    cin >> t;
    int org = t;
    while (t--) solve(org - t);
}
