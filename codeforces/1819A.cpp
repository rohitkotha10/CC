/*
author:  rohitkotha10
created: 18.04.2023 09:03:16
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

    set<int> chmex;
    for (int i = 0; i < n; i++) chmex.insert(arr[i]);

    int mex = n;
    for (int i = 0; i < n; i++) {
        if (chmex.count(i) == 0) {
            mex = i;
            break;
        }
    }
    if (mex == n)
        cout << "No" << endl;
    else {
        // convert all available mex + 1's to mex
        // all mex + 1's must be in a same subsegment without changing overall mex
        int mn = -1;
        int mx = -1;
        for (int i = 0; i < n; i++) {
            if (arr[i] == mex + 1) {
                mn = i;
                break;
            }
        }

        for (int i = n - 1; i >= 0; i--) {
            if (arr[i] == mex + 1) {
                mx = i;
                break;
            }
        }

        if (mx == mn || mn == -1) {
            cout << "Yes" << endl;
        } else {
            chmex.clear();
            for (int i = 0; i < mn; i++) chmex.insert(arr[i]);
            for (int i = mx + 1; i < n; i++) chmex.insert(arr[i]);

            int finmex = n;
            for (int i = 0; i < n; i++) {
                if (chmex.count(i) == 0) {
                    finmex = i;
                    break;
                }
            }

            if (finmex == mex) {
                cout << "Yes" << endl;
            } else {
                cout << "No" << endl;
            }
        }
    }
}

signed main() {
    IOS;
    int t = 1;
    cin >> t;
    int org = t;
    while (t--) solve(org - t);
}
