/*
author:  rohitkotha10
*/
#include <bits/stdc++.h>
using namespace std;

#define IOS              \
ios::sync_with_stdio(0); \
cin.tie(0)
#define int long long

const int MAX = 2e5 + 5;
const int MOD = 1e9 + 7;

void solve(int testCase) {
  int l, r;
  cin >> l >> r;
  if (l == 1 && l == r) cout << 1 << endl;
  else cout << r - l << endl;
}

signed main() {
  IOS;
  int t = 1;
  cin >> t;
  int org = t;
  while (t--) solve(org - t);
}
