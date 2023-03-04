/*
author:  rohitkotha10
created: 05.03.2023 00:10:12
*/
#include <bits/stdc++.h>
using namespace std;

#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0)
#define int long long

const int MAX = 2e5 + 5;
const int MOD = 1e9 + 7;

int binSearch(vector<int>& arr, int val, int start, int end) {
    int cur = (start + end) / 2;
    if (start == cur) {
        if (arr[end] < val)
            return end;
        else if (arr[start] < val)
            return start;
        else
            return start - 1;
    }

    if (arr[cur] >= val) {
        return binSearch(arr, val, start, cur - 1);
    } else {
        return binSearch(arr, val, cur + 1, end);
    }
}
void solve() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    vector<int> pre(n);
    for (int i = 0; i < n; i++) { pre[i] = arr[i] + i; }

    cout << 1 << ' ';

    for (int i = 1; i < n; i++) {
        int elem = binSearch(pre, i + 1, 0, i);
        cout << i - elem << ' ';
        cout << flush;
    }
    cout << endl;
}

signed main() {
    IOS;
    int t = 1;
    cin >> t;
    while (t--) solve();
}
