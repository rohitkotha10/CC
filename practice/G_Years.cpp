/*
author:  rohitkotha10
created: 10.05.2021 20:10:50
*/
#include <bits/stdc++.h>
using namespace std;

#define IOS                  \
	ios::sync_with_stdio(0); \
	cin.tie(0);              \
	cout.tie(0);
#define int long long
#define endl '\n'
#define rep(i, start, endin, incre) for (int i = start; i <= endin; i += incre)

const int MAX = 2e5 + 5;
const int MOD = 1e9 + 7;

int testnum = 0;
int testflag = 0;
//no test
//sol: editorial + JeevanJyot
void solve()
{
	int n;
	cin >> n;

	map<int, int> arr;
	rep(i, 0, n - 1, 1)
	{
		int b, d;
		cin >> b >> d;
		arr[b]++;
		arr[d]--;
	}

	int ans = 0;
	int cnt = 0;
	int temp = 0;

	for (auto it : arr)
	{
		temp += it.second;
		if (temp > cnt)
		{
			cnt = temp;
			ans = it.first;
		}
	}

	cout << ans << ' ' << cnt << endl;
}

signed main()
{
	IOS;
	int t = 1;
	//cin >> t;
	while (t--)
	{
		testnum++;
		solve();
	}
}
