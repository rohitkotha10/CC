/*
author:  rohitkotha10
created: 28.12.2023 20:19:55
*/
#include <bits/stdc++.h>
using namespace std;

#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0)
#define int long long

const int MAX = 2e5 + 5;
const int MOD = 1e9 + 7;

bool isVovel(char a) {
    return (a == 'a' || a == 'e');
}

void solve(int testCase) {
    int n;
    cin >> n;
    string s;
    cin >> s;

    vector<int> stops(n, 0);

    for (int i = 0; i < n - 1; i++) {
        if (!isVovel(s[i]) && s[i] == s[i + 1]) stops[i + 1] = 1;
        if (isVovel(s[i])) stops[i - 1] = 1;
    }
    if (isVovel(s[n - 1])) stops[n - 2] = 1;

    string ans;
    stops[0] = 0;
    for (int i = 0; i < n; i++) {
        if (stops[i] == 1) ans += '.';
        ans += s[i];
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
