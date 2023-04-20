/*
author:  rohitkotha10
created: 20.04.2023 20:31:26
*/
#include <bits/stdc++.h>
using namespace std;

#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0)
#define int long long

const int MAX = 2e5 + 5;
const int MOD = 1e9 + 7;

int getLog2(int n) {
    int cnt = 0;
    while (n > 0) {
        cnt++;
        n /= 2;
    }
    return cnt;
}

void solve(int testCase) {
    string s;
    cin >> s;

    map<char, int> arr;

    for (int i = 0; i < s.length(); i++) { arr[s[i]]++; }
    if (arr.size() == 1)
        cout << 0 << endl;
    else {
        int ans = s.length();
        for (auto i: arr) {
            int mx = 0;
            char cur = i.first;
            int cnt = 0;
            for (int i = 0; i < s.length(); i++) {
                if (s[i] == cur) {
                    mx = max(cnt, mx);
                    cnt = 0;
                } else
                    cnt++;
            }
            mx = max(cnt, mx);  // for last
            int temp = getLog2(mx);
            ans = min(temp, ans);
        }
        cout << ans << endl;
    }
    // cout << arr.size() << endl;
    // for (auto i: arr) { cout << i.first << ' ' << i.second << endl; }
    // cout << endl;
}

signed main() {
    IOS;
    int t = 1;
    cin >> t;
    int org = t;
    while (t--) solve(org - t);
}
