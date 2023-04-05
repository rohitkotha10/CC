/*
author:  rohitkotha10
created: 04.04.2023 18:29:44
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
    int m;
    cin >> m;
    vector<vector<int>> arr(m);

    for (int i = 0; i < m; i++) {
        int n;
        cin >> n;
        for (int j = 0; j < n; j++) {
            int temp;
            cin >> temp;
            arr[i].push_back(temp);
        }
    }
    map<int, vector<int>> players;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < arr[i].size(); j++) { players[arr[i][j]].push_back(i); }
    }

    vector<int> days(m, -1);
    for (auto i: players) { days[i.second.back()] = i.first; }
    for (int i = 0; i < m; i++) {
        // cout << days[i] << ' ';
        if (days[i] == -1) {
            cout << -1 << endl;
            return;
        }
    }

    for (int i = 0; i < m; i++) { cout << days[i] << ' '; }
    cout << endl;
}

signed main() {
    IOS;
    int t = 1;
    cin >> t;
    int org = t;
    while (t--) solve(org - t);
}
