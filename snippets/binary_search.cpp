/*
author:  rohitkotha10
created: 25.04.2021 11:29:31
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);

    for(int &x : arr) cin >> x;

    int val;
    cin >> val;
    int k = 0;
    for(int b = n / 2; b >= 1; b /= 2)
    {
        while(k < n && arr[k + b] <= val) k += b;
    }

    if(arr[k] == val) cout << "FOUND AT "<< k + 1 << endl;
    else
    {
        cout << "NOT FOUND" << endl;
    }
    return 0;

}
