/*
author:  rohitkotha10
created: 20.05.2021 21:23:51
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

bool is_pal(string s)
{
    string p = s;
    reverse(p.begin(), p.end());
    if (p == s)
        return true;
    return false;
}

void solve()
{
    int n;
    cin >> n;
    string arr;
    cin >> arr;

    int alice = 0;
    int bob = 0;

    while (!is_pal(arr)) //make palindrome asap
    {
		string copy = arr;
		reverse(copy.begin(), copy.end());

		rep(i, 0, n - 1, 1)
		{
			if (arr[i] == copy[i] && arr[i] == '0' && !(n % 2 == 1 && i == (n / 2)))
			{
				arr[i] = '1';
				alice += 1;
				break;
			}
		}

		copy = arr;
		reverse(copy.begin(), copy.end());

		rep(i, 0, n - 1, 1)
		{
			if (arr[i] != copy[i] && arr[i] == '0')
			{
				arr[i] = '1';
				bob += 1;
				break;
			}
		}
		//cout << arr << endl;
    }

	//cout << bob << ' ' << alice << endl;

    int cnt = 0;
    rep(i, 0, n - 1, 1)
    {
        if (arr[i] == '0')
            cnt++;
    }

    if (cnt % 2 == 1 && cnt != 1)
        bob += 2;
	else if (cnt == 0);
    else if (cnt == 1)
        alice += 1;
    else
        alice += 2;

    cout << (alice < bob ? "ALICE" : alice > bob ? "BOB" : "DRAW") << endl;
}

signed main()
{
    IOS;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}
