/*
author:  rohitkotha10
created: 08.02.2024 21:30:09
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
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> arrayA(n), arrayB(m);
    for (int i = 0; i < n; i++) cin >> arrayA[i];
    for (int i = 0; i < m; i++) cin >> arrayB[i];

    sort(arrayA.begin(), arrayA.end());
    sort(arrayB.begin(), arrayB.end());

    n = unique(arrayA.begin(), arrayA.end()) - arrayA.begin();
    arrayA.resize(n);

    m = unique(arrayB.begin(), arrayB.end()) - arrayB.begin();
    arrayB.resize(m);

    vector<int> uniqueA, uniqueB, intersection;

    int pointerA = 0, pointerB = 0;
    int needed = 1;
    while (needed <= k && !(pointerA >= n && pointerB >= m)) {
        if (pointerA == n) {
            if (arrayB[pointerB] == needed) {
                needed++;
                uniqueB.push_back(arrayB[pointerB]);
                pointerB++;
            } else {
                cout << "NO" << endl;
                return;
            }
        } else if (pointerB == m) {
            if (arrayA[pointerA] == needed) {
                needed++;
                uniqueA.push_back(arrayA[pointerA]);
                pointerA++;
            } else {
                cout << "NO" << endl;
                return;
            }
        } else {
            if (min(arrayA[pointerA], arrayB[pointerB]) != needed) {
                cout << "NO" << endl;
                return;
            }
            needed++;
            if (arrayA[pointerA] < arrayB[pointerB]) {
                uniqueA.push_back(arrayA[pointerA]);
                pointerA++;
            } else if (arrayA[pointerA] > arrayB[pointerB]) {
                uniqueB.push_back(arrayB[pointerB]);
                pointerB++;
            } else {
                intersection.push_back(arrayA[pointerA]);
                pointerA++;
                pointerB++;
            }
        }
    }
    cout << ((uniqueA.size() > k / 2 || uniqueB.size() > k / 2 || needed != k + 1) ? "NO" : "YES") << endl;
}

signed main() {
    IOS;
    int t = 1;
    cin >> t;
    int org = t;
    while (t--) solve(org - t);
}
