/*
author:  rohitkotha10
created: 12.04.2021 20:19:40
*/
#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define endl '\n'
#define rep(i, start, endin, incre) for(int i = start; i <= endin; i += incre)

const int MAX = 1e9 + 7;
const int MOD = 1e9 + 7;

vector<bool> is_prime;
vector<int> primes;

// Calculates all primes till MAX_PR and store them in primes
// Stores the primality of all numbers till MAX_PR in is_prime
void prime_sieve(int MAX_PR) {
    is_prime.assign(MAX_PR + 1, 1);
    is_prime[0] = is_prime[1] = 0;
    for (int i = 4; i <= MAX_PR; i += 2)
        is_prime[i] = 0;
    for (int i = 3; i * i <= MAX_PR; i += 2)
        if (is_prime[i])
            for (int j = i * i; j <= MAX_PR; j += i * 2)
                is_prime[j] = 0;
    primes.push_back(2);
    for (int i = 3; i <= MAX_PR; i += 2) {
        if (is_prime[i])
            primes.push_back(i);
    }
};

int digN(int n)
{
    int ans = 0;
    while(n > 0)
    {
        ans++;
        n /= 10;
    }
    return ans;
};

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;

    if(a == b && b == c)
    {
        int n = 1;
        while(a > 0)
        {
            n = n*10;;
            a--;
        }
        n--;
        cout << n << ' ' << n << endl;
        return;
    }

    int p1 = 0;
    int x = 0; //p1 * p2 = x;
    int y = 0; //p1 * p3 = y;

    int n = primes.size();

    rep(i, 0, n - 1, 1)
    {
        int val = digN(primes[i]);
        if(val == c)
        {
            p1 = primes[i];
            break;
        }
            
    }
        
    rep(i, 0, n - 1, 1)
    {
        int val = digN(primes[i] * p1);
        if(val == a && p1 != primes[i])
        {
            x = primes[i] * p1;
            break;
        }
    }

    rep(i, 0, n - 1, 1)
    {
        int val = digN(primes[i] * p1);
        if(val == b && p1 != primes[i] && x != primes[i] * p1)
        {
            y = primes[i] * p1;
            break;
        }
    }

    cout << x << ' ' << y << endl;

}

signed main()
{
    prime_sieve(9e8);
    IOS;
    int t=1;
    cin >> t;
    while(t--)
    {
        solve();
    }
}




