/*
author:  rohitkotha10
created: 04.03.2023 01:44:50
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
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int diff = 32;
    vector<int> small(26, 0);
    vector<int> big(26, 0);
    for (int i = 0; i < s.length(); i++) {
        int num = (int)s[i];
        if (num >= 97)
            small[num - 97]++;
        else
            big[num - 65]++;
    }

    int ans = 0;
    for (int i = 0; i < 26; i++) {
        int diff = abs(small[i] - big[i]);
        if (diff == 0) {
            ans += small[i];
        } else {
            int temp = diff / 2;
            if (k >= temp) {
                ans += temp + min(small[i], big[i]);
                k -= temp;
            } else {
                int cantake = k;
                ans += cantake + min(small[i], big[i]);
                k = 0;
            }
        }
    }
    cout << ans << endl;
}

signed main() {
    IOS;
    int t = 1;
    cin >> t;
    while (t--) solve();
}
