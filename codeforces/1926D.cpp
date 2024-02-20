/*
author:  rohitkotha10
created: 19.02.2024 20:31:34
*/
#include <bits/stdc++.h>
using namespace std;

#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0)
#define int long long

const int MAX = 2e5 + 5;
const int MOD = 1e9 + 7;

const int inverter = (1ll << 31) - 1;

int getInverter(int n) {
    int cnt = 1;
    int ans = 1;
    while (cnt++ <= n) ans *= 2;
    return ans - 1;
}

void solve(int testCase) {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    sort(arr.begin(), arr.end());
    multiset<int> items;
    int groups = 0;

    for (int i = 0; i < n; i++) {
        if (items.count(inverter ^ arr[i])) {
            items.erase(items.find(inverter ^ arr[i]));
            continue;
        }
        groups++;
        items.insert(arr[i]);
    }
    cout << groups << endl;
}

signed main() {
    IOS;
    int t = 1;
    cin >> t;
    int org = t;
    while (t--) solve(org - t);
}
