/*
author:  rohitkotha10
created: 08.04.2023 19:43:28
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
    int n, k;
    cin >> n >> k;
    vector<vector<int>> arr(n, vector<int>(n));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) { cin >> arr[i][j]; }
    }

    int diff = 0;
    if (n % 2 == 0) {
        int mid = n / 2;
        for (int i = 0; i < mid; i++) {
            for (int j = 0; j < mid; j++) {
                int xdis = mid - i;
                int ydis = mid - j;
                int xref = mid + xdis - 1;
                int yref = mid + ydis - 1;
                if (arr[i][j] != arr[xref][yref]) { diff++; }
            }
        }

        for (int i = 0; i < mid; i++) {
            for (int j = mid; j < n; j++) {
                int xdis = mid - i;
                int ydis = j - mid;
                int xref = mid + xdis - 1;
                int yref = mid - ydis - 1;
                if (arr[i][j] != arr[xref][yref]) { diff++; }
            }
        }
        if (diff <= k && (k - diff) % 2 == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    } else {
        int mid = (n - 1) / 2;
        for (int i = 0; i < mid; i++) {
            if (arr[i][mid] != arr[n - i - 1][mid]) { diff++; }
            if (arr[mid][i] != arr[mid][n - i - 1]) { diff++; }
        }

        for (int i = 0; i < mid; i++) {
            for (int j = 0; j < mid; j++) {
                int xdis = mid - i;
                int ydis = mid - j;
                int xref = mid + xdis;
                int yref = mid + ydis;
                if (arr[i][j] != arr[xref][yref]) { diff++; }
            }
        }

        for (int i = 0; i < mid; i++) {
            for (int j = mid + 1; j < n; j++) {
                int xdis = mid - i;
                int ydis = j - mid;
                int xref = mid + xdis;
                int yref = mid - ydis;
                if (arr[i][j] != arr[xref][yref]) { diff++; }
            }
        }

        if (diff <= k)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}

signed main() {
    IOS;
    int t = 1;
    cin >> t;
    int org = t;
    while (t--) solve(org - t);
}
