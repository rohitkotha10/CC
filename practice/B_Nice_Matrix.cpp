/*
author:  rohitkotha10
created: 10.05.2021 21:08:01
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

int median1(int a, int b, int c, int d)
{
	vector<int> arr{a, b, c, d};
	sort(arr.begin(), arr.end());
	int ans = arr[1] + arr[2];
	if (ans % 2 == 0)
		return ans / 2;
	ans /= 2;

	return ans + 1;
}

int median2(int a, int b, int c, int d)
{
	vector<int> arr{a, b, c, d};
	sort(arr.begin(), arr.end());
	int ans = arr[1] + arr[2];
	if (ans % 2 == 0)
		return ans / 2;
	ans /= 2;

	return ans;
}
//take median not mean
void solve()
{
	int n, m;
	cin >> n >> m;
	vector<vector<int>> arr(n, vector<int>(m));

	rep(i, 0, n - 1, 1)
	{
		rep(j, 0, m - 1, 1)
		{
			cin >> arr[i][j];
		}
	}

	int cnt = 0;

	rep(i, 0, (n / 2) - 1, 1)
	{
		rep(j, 0, (m / 2) - 1, 1)
		{

			int cnt1 = 0;
			int cnt2 = 0;
			int avg1 = median1(arr[i][j], arr[n - i - 1][j], arr[i][m - j - 1], arr[n - 1 - i][m - 1 - j]);
			cnt1 += abs(avg1 - arr[i][j]) +
					abs(avg1 - arr[n - i - 1][j]) +
					abs(avg1 - arr[i][m - j - 1]) +
					abs(avg1 - arr[n - 1 - i][m - 1 - j]);

			int avg2 = median2(arr[i][j], arr[n - i - 1][j], arr[i][m - j - 1], arr[n - 1 - i][m - 1 - j]);
			cnt2 += abs(avg2 - arr[i][j]) +
					abs(avg2 - arr[n - i - 1][j]) +
					abs(avg2 - arr[i][m - j - 1]) +
					abs(avg2 - arr[n - 1 - i][m - 1 - j]);

			// cout << i << ' ' << j << " H ";

			// if (cnt1 < cnt2)
			// 	cout << avg1 << endl;
			// else
			// 	cout << avg2 << endl;

			cnt += min(cnt1, cnt2);
		}
	}

	if (n % 2 == 1)
	{
		rep(i, 0, (m / 2) - 1, 1)
		{
			if (arr[n / 2][i] != arr[n / 2][m - 1 - i])
				cnt += abs(arr[n / 2][i] - arr[n / 2][m - 1 - i]);
		}
	}

	if (m % 2 == 1)
	{
		rep(i, 0, (n / 2) - 1, 1)
		{
			if (arr[i][m / 2] != arr[n - i - 1][m / 2])
				cnt += abs(arr[i][m / 2] - arr[n - i - 1][m / 2]);
		}
	}

	cout << cnt << endl;
}

signed main()
{
	IOS;
	int t = 1;
	cin >> t;
	while (t--)
	{
		testnum++;
		solve();
	}
	return 0;
}
