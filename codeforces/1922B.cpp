/*
author:  rohitkotha10
created: 13.02.2024 19:37:52
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

    sort(arr.begin(), arr.end());

    vector<pair<int, int>> count;

    if (n <= 2) {
        cout << 0 << endl;
        return;
    }

    int cnt = 1;
    for (int i = 1; i < n; i++) {
        if (arr[i] == arr[i - 1])
            cnt++;
        else {
            count.emplace_back(arr[i - 1], cnt);
            cnt = 1;
        }
    }

    if (arr[n - 1] == arr[n - 2]) count.emplace_back(arr[n - 1], cnt);
    if (arr[n - 1] != arr[n - 2]) count.emplace_back(arr[n - 1], 1);

    // for (int i = 0; i < count.size(); i++) cout << count[i].first << ' ';
    // cout << endl;
    // for (int i = 0; i < count.size(); i++) cout << count[i].second << ' ';
    // cout << endl;

    int sum = 0;
    int ans = 0;
    for (int i = 0; i < count.size(); i++) {
        int temp = count[i].second;
        if (temp >= 3) { ans += temp * (temp - 1) * (temp - 2) / 6; }
        if (temp >= 2) { ans += sum * temp * (temp - 1) / 2; }
        sum += temp;
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
