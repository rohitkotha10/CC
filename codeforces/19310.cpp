/*
author:  rohitkotha10
created: 13.02.2024 20:05:19
*/
#include <bits/stdc++.h>
using namespace std;

#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0)
#define int long long

const int MAX = 2e5 + 5;
const int MOD = 1e9 + 7;

vector<string> ans(79);

void prefill() {
    int cnt = 3;

    for (int i = 0; i < 26; i++) {
        string temp = "aaa";
        temp[2] = 'a' + i;
        ans[cnt] = temp;
        cnt++;
    }

    for (int i = 1; i < 26; i++) {
        string temp = "aaz";
        temp[1] = 'a' + i;
        ans[cnt] = temp;
        cnt++;
    }

    for (int i = 1; i < 26; i++) {
        string temp = "azz";
        temp[0] = 'a' + i;
        ans[cnt] = temp;
        cnt++;
    }
}

void solve(int testCase) {
    int n;
    cin >> n;
    cout << ans[n] << endl;
}

signed main() {
    IOS;
    int t = 1;
    cin >> t;
    int org = t;
    prefill();
    while (t--) solve(org - t);
}
