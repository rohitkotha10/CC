/*
author:  rohitkotha10
created: 09.02.2024 21:21:18
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
    int n, m;
    cin >> n >> m;
    vector<int> petya_array(n), vasya_array(m);

    for (int i = 0; i < n; i++) cin >> petya_array[i];
    for (int i = 0; i < m; i++) cin >> vasya_array[i];

    sort(petya_array.begin(), petya_array.end());
    sort(vasya_array.rbegin(), vasya_array.rend());

    int ans = 0;
    int firpos_petya = 0, laspos_petya = n - 1;
    int firpos_vasya = 0, laspos_vasya = m - 1;
    for (int i = 0; i < n; i++) {
        int op1 = abs(petya_array[firpos_petya] - vasya_array[firpos_vasya]);
        int op2 = abs(petya_array[laspos_petya] - vasya_array[laspos_vasya]);
        int op3 = abs(petya_array[firpos_petya] - vasya_array[laspos_vasya]);
        int op4 = abs(petya_array[laspos_petya] - vasya_array[firpos_vasya]);

        int temp = max(op1, max(op2, max(op3, op4)));
        if (temp == op1) {
            ans += op1;
            firpos_petya++;
            firpos_vasya++;
        } else if (temp == op2) {
            ans += op2;
            laspos_petya--;
            laspos_vasya--;
        } else if (temp == op3) {
            ans += op3;
            firpos_petya++;
            laspos_vasya--;
        } else {
            ans += op4;
            laspos_petya--;
            firpos_vasya++;
        }
    }

    cout << ans << endl;
}

signed main() {
    IOS;
    int t = 1;
    cin >> t;
    int org = t;
    while (t--) solve(org - t);
}
