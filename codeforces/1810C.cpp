/*
author:  rohitkotha10
created: 31.03.2023 20:33:25
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
    int n, c, d;
    cin >> n >> c >> d;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    sort(arr.begin(), arr.end());
    vector<int> temp = {arr[0]};
    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[i - 1] && arr[i] != arr[0]) temp.push_back(arr[i]);
    }

    arr = temp;

    int nsize = arr.size();
    int ans = 0;
    ans += (n - nsize) * c;

    sort(arr.begin(), arr.end());
    int las = arr.back();
    if (las == nsize) {
        cout << ans << endl;
    } else {
        // between arr[i] and arr[i - 1] denoted with addcosts[i]
        vector<int> addcosts(nsize, 0);
        addcosts[0] = d * (arr[0] - 1);
        int tot = addcosts[0];
        for (int i = 1; i < nsize; i++) {
            addcosts[i] = d * (arr[i] - arr[i - 1] - 1);
            tot += addcosts[i];
        }

        int gapcost = 0;
        int temp = min(tot, nsize * c + d);
        for (int i = 0; i < nsize; i++) {
            gapcost += addcosts[i];
            int remcost = c * (nsize - 1 - i);
            // cout << i << ' ' << gapcost << ' ' << remcost << endl;
            // cout << i << ' ' << gapcost + remcost << endl;
            temp = min(temp, gapcost + remcost);
        }
        cout << ans + temp << endl;
    }
}

signed main() {
    IOS;
    int t = 1;
    cin >> t;
    int org = t;
    while (t--) solve(org - t);
}
