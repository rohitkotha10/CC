/*
author:  rohitkotha10
created: 09.04.2023 19:31:54
*/
#include <bits/stdc++.h>
using namespace std;

#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0)
#define int long long

const int MAX = 2e5 + 5;
const int MOD = 1e9 + 7;

int getSum(vector<int>& arr, int fir, int las) {
    cout << "? " << las - fir + 1 << ' ';
    int sum = 0;
    for (int i = fir; i <= las; i++) {
        cout << i << ' ';
        sum += arr[i];
    }
    cout << endl;

    int res;
    cin >> res;

    return res;
}

void solve(int testCase) {
    int n;
    cin >> n;
    vector<int> arr(n + 1);
    for (int i = 1; i <= n; i++) cin >> arr[i];

    int fir = 1;
    int las = n;

    vector<int> pres(n + 1, 0);
    for (int i = 1; i <= n; i++) pres[i] = arr[i] + pres[i - 1];

    while (fir < las) {
        int cur = (fir + las) / 2;
        int resleft = getSum(arr, fir, cur);
        int expectleft = pres[cur] - pres[fir] + arr[fir];
        if (resleft > expectleft)
            las = cur;
        else
            fir = cur + 1;
    }
    cout << "! " << fir << endl;
}

signed main() {
    IOS;
    int t = 1;
    cin >> t;
    int org = t;
    while (t--) solve(org - t);
}
