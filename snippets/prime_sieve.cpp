/*
author:  rohitkotha10
created: 25.04.2021 15:58:38
*/
#include <vector>
#include <iostream>
#include <math.h>
using namespace std;

vector<int> primes;
vector<bool> check{0};

void init_sieve(long long int max)
{
    vector<int> all{0};
    for(int i = 1; i <= max; i++)
    {
        check.push_back(1);
        all.push_back(i);
    }
    check[1] = 0;

    int n = max;

    int k = 2;

    while(k * k <= n)
    {
        int i = 2;
        while(i * k <= n)
        {
            check[k * i] = 0;
            i++;
        }
        k++;
    }

    for(int i = 1; i <= max; i++)
    {
        if(check[i] == 1)
        {
            primes.push_back(all[i]);
        }
    }
    //cout << "SUCCESS" << endl;
};

int main()
{
    init_sieve(sqrt(1e9));
    cout << primes.size() << endl;
}

