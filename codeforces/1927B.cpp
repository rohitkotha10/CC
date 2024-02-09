/*
author:  rohitkotha10
created: 08.01.2024 20:59:29
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

    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == 1) cnt++;
    }

    map<int, vector<char>> items;
    for (int i = 0; i < cnt; i++) items[0].push_back('a' + i);
    reverse(items[0].begin(), items[0].end());

    vector<int> firsts;
    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) firsts.push_back(i);
        if (firsts.size() == cnt) break;
    }
    reverse(firsts.begin(), firsts.end());

    string ans(n, '#');
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            if (arr[i] == 1) {
                ans[firsts.back()] = items[arr[i] - 1].back();
                firsts.pop_back();
            }
            ans[i] = items[arr[i] - 1].back();
            items[arr[i]].push_back(items[arr[i] - 1].back());
            items[arr[i] - 1].pop_back();
        }
    }

    int cur = cnt;
    for (int i = 0; i < n; i++) {
        if (ans[i] == '#') {
            ans[i] = 'a' + cur;
            cur++;
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
