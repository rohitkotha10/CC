/*
author:  rohitkotha10
created: 09.03.2023 22:12:57
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
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    vector<int> tills;
    int temp = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == 2) {
            if (temp != 0) tills.push_back(temp);
            temp = 0;
        } else
            temp++;
    }
    // cout << tills.size() << endl;
    int ans = 0;
    int canTake = 0;
    int extraSpace = 0;
    for (int i = 0; i < tills.size(); i++) {
        int cur = tills[i];
        ans += max(cur - canTake, 0ll);
        int rems = 0;
        if (cur - canTake < 0) rems = canTake - cur;
        if (cur % 2 == 0) {
            if (extraSpace == 0) {
                canTake = cur / 2 - 1;
                extraSpace = 2;
            } else if (extraSpace == 1) {
                canTake = cur / 2;
                extraSpace = 1;
            } else if (extraSpace == 2) {
                canTake = cur / 2;
                extraSpace = 2;
            }
        } else if (cur % 2 == 1) {
            if (extraSpace == 0) {
                canTake = (cur - 1) / 2;
                extraSpace = 1;
            } else if (extraSpace == 1) {
                canTake = cur / 2;
                extraSpace = 2;
            } else if (extraSpace == 2) {
                canTake = (cur + 1) / 2;
                extraSpace = 1;
            }
        }
        canTake += rems;
    }

    if (temp != 0) ans += max(temp - canTake, 0ll);
    cout << ans << endl;
}

signed main() {
    IOS;
    int t = 1;
    cin >> t;
    while (t--) solve();
}