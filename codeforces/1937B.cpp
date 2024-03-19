/*
author:  rohitkotha10
created: 19.03.2024 13:05:41
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
    string up, down;
    cin >> up >> down;
    int cnt = 0;
    string ans;
    ans.push_back(down.back());
    int cur = n - 1;
    while (down[cur - 1] <= up[cur] && cur > 0) {
        if (down[cur - 1] == up[cur]) cnt++;
        ans.push_back(down[cur - 1]);
        cur--;
    }
    string temp = up.substr(0, cur + 1);
    reverse(ans.begin(), ans.end());
    cout << temp + ans << endl;
    cout << cnt + 1 << endl;
}

signed main() {
    IOS;
    int t = 1;
    cin >> t;
    int org = t;
    while (t--) solve(org - t);
}
