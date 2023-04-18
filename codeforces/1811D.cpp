/*
author:  rohitkotha10
created: 18.04.2023 07:37:33
*/
#include <bits/stdc++.h>
using namespace std;

#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0)
#define int long long

const int MAX = 2e5 + 5;
const int MOD = 1e9 + 7;

vector<int> fibonacci;

void buildfib() {
    fibonacci.push_back(1);
    fibonacci.push_back(1);
    for (int i = 2; i <= 45; i++) { fibonacci.push_back(fibonacci[i - 2] + fibonacci[i - 1]); }
}

void solve(int testCase) {
    int n, h, w;
    cin >> n >> h >> w;
    // 8 possibilities for x and y;
    int horizontal = 0;
    int cur = n;
    while (cur > 1) {
        // cout << fibonacci[cur - 1] << ' ' << fibonacci[cur] << ' ' << w << endl;
        if (w > fibonacci[cur - 1] && w <= fibonacci[cur]) {
            cout << "NO" << endl;
            return;
        }
        if (w <= fibonacci[cur - 1])
            w = w;
        else
            w = fibonacci[cur + 1] - w + 1;
        swap(w, h);
        cur--;
    }
    cout << "YES" << endl;
}

signed main() {
    IOS;
    int t = 1;
    cin >> t;
    int org = t;
    buildfib();
    while (t--) solve(org - t);
}
