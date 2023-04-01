/*
author:  rohitkotha10
created: 01.04.2023 12:29:35
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
    int hmin = -1;
    int hmax = -1;
    for (int i = 0; i < n; i++) {
        int type;
        cin >> type;

        if (type == 1) {
            int a, b, d;
            cin >> a >> b >> d;

            if (hmin == -1) {
                hmax = a * d - b * (d - 1);
                if (d == 1)
                    hmin = 1;
                else
                    hmin = a * (d - 1) - b * (d - 2) + 1;
                cout << 1 << ' ';
            } else {
                int dmin = (hmin - b) / (a - b);
                if (dmin <= 0)
                    dmin = 1;
                else if ((hmin - b) % (a - b) != 0)
                    dmin++;

                int dmax = (hmax - b) / (a - b);
                if (dmax <= 0)
                    dmax = 1;
                else if ((hmax - b) % (a - b) != 0)
                    dmax++;

                // cout << endl << hmin << ' ' << dmin << ' ' << hmax << ' ' << dmax << ' ';

                if (d < dmin || d > dmax) {
                    cout << 0 << ' ';
                } else {
                    int thmax = a * d - b * (d - 1);
                    int thmin = -1;
                    if (d == 1)
                        thmin = 1;
                    else
                        thmin = a * (d - 1) - b * (d - 2) + 1;

                    hmin = max(hmin, thmin);
                    hmax = min(hmax, thmax);

                    cout << 1 << ' ';
                }
            }
        } else if (type == 2) {
            int a, b;
            cin >> a >> b;

            if (hmin == -1) {
                cout << -1 << ' ';
            } else {
                int dmin = (hmin - b) / (a - b);
                if (dmin <= 0)
                    dmin = 1;
                else if ((hmin - b) % (a - b) != 0)
                    dmin++;

                int dmax = (hmax - b) / (a - b);
                if (dmax <= 0)
                    dmax = 1;
                else if ((hmax - b) % (a - b) != 0)
                    dmax++;

                // cout << endl << hmin << ' ' << dmin << ' ' << hmax << ' ' << dmax << ' ';

                if (dmin == dmax)
                    cout << dmin << ' ';
                else
                    cout << -1 << ' ';
            }
        }
    }
    cout << endl;
}

signed main() {
    IOS;
    int t = 1;
    cin >> t;
    int org = t;
    while (t--) solve(org - t);
}
