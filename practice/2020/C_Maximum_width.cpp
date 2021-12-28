#include<bits/stdc++.h>
using namespace std;

#define INF 1234567890
#define ll long long

int N, M;
string s, t;
int L[200201], R[200201];

int main()
{
	ios::sync_with_stdio(0); cin.tie(0);
	cin.exceptions(ios::badbit | ios::failbit);
	cin >> N >> M >> s >> t;
	for(int i=0, j=0; i<t.size(); i++, j++)
	{
		while(t[i] != s[j]) j++;
		L[i] = j;
	}
	for(int i=(int)t.size()-1, j=(int)s.size()-1; i>=0; i--, j--)
	{
		while(t[i] != s[j]) j--;
		R[i] = j;
	}
	int res = 0;
	for(int i=1; i<t.size(); i++)
		res = max(res, R[i] - L[i-1]);
	cout << res << "\n";
    cout << R[2] << endl;
	return 0;
}