/*
author:  rohitkotha10
created: 17.02.2024 20:25:40
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
    for (int& item: arr) cin >> item;

    set<int> used, notUsed;
    vector<int> ans;

    int index = 1;
    for (int elem: arr) {
        int item = elem + index++;
        if (!used.count(item)) notUsed.insert(item);

        int toInsert = *(--notUsed.upper_bound(item));

        used.insert(toInsert);
        notUsed.erase(toInsert);
        ans.push_back(toInsert);

        if (!used.count(toInsert - 1)) notUsed.insert(toInsert - 1);
    }

    sort(ans.rbegin(), ans.rend());

    for (int item: ans) cout << item << ' ';
    cout << endl;
}

signed main() {
    IOS;
    int t = 1;
    cin >> t;
    int org = t;
    while (t--) solve(org - t);
}
