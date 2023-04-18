/*
author:  rohitkotha10
created: 18.04.2023 08:27:44
*/
#include <bits/stdc++.h>
using namespace std;

#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0)
#define int long long

const int MAX = 2e5 + 5;
const int MOD = 1e9 + 7;

bool comp(const pair<int, int>& a, const pair<int, int>& b) {
    return a.first > b.first || (a.first == b.first && a.second < b.second);
}

void solve(int testCase) {
    int n, s1, s2;
    cin >> n >> s1 >> s2;
    vector<pair<int, int>> arr(n);
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        arr[i] = make_pair(temp, i + 1);
    }
    sort(arr.begin(), arr.end(), comp);
    // for (auto i: arr) cout << i.first << ' ';
    // cout << endl;
    // for (auto i: arr) cout << i.second << ' ';
    // cout << endl;
    vector<int> ansa(0), ansb(0);
    int sza = 1, szb = 1;
    for (int i = 0; i < n; i++) {
        if (s1 * sza <= s2 * szb) {
            ansa.push_back(arr[i].second);
            sza++;
        } else {
            ansb.push_back(arr[i].second);
            szb++;
        }
    }
    cout << ansa.size() << ' ';
    for (auto i: ansa) cout << i << ' ';
    cout << endl;
    cout << ansb.size() << ' ';
    for (auto i: ansb) cout << i << ' ';
    cout << endl;
}

signed main() {
    IOS;
    int t = 1;
    cin >> t;
    int org = t;
    while (t--) solve(org - t);
}
