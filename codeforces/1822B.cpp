/*
author:  rohitkotha10
created: 25.04.2023 12:51:57
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
    vector<int> pos(0), neg(0);
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        if (temp >= 0)
            pos.push_back(temp);
        else if (temp < 0)
            neg.push_back(temp);
    }

    sort(pos.begin(), pos.end());
    sort(neg.rbegin(), neg.rend());

    if (neg.size() == 0)
        cout << pos[pos.size() - 1] * pos[pos.size() - 2] << endl;
    else if (pos.size() == 0)
        cout << neg[neg.size() - 1] * neg[neg.size() - 2] << endl;
    else if (pos.size() == 1 && neg.size() == 1)
        cout << pos.back() * neg.back() << endl;
    else if (neg.size() == 1)
        cout << pos[pos.size() - 1] * pos[pos.size() - 2] << endl;
    else if (pos.size() == 1)
        cout << neg[neg.size() - 1] * neg[neg.size() - 2] << endl;
    else
        cout << max(pos[pos.size() - 1] * pos[pos.size() - 2], neg[neg.size() - 1] * neg[neg.size() - 2]) << endl;
}

signed main() {
    IOS;
    int t = 1;
    cin >> t;
    int org = t;
    while (t--) solve(org - t);
}
