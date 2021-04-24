/*
author:  rohitkotha10
created: 23.04.2021 13:46:12
*/
#include <bits/stdc++.h>
using namespace std;

struct Token { int map, val; };
bool operator<(const Token& a, const Token& b) { return a.val < b.val; };
bool operator>(const Token& a, const Token& b) { return a.val > b.val; };
bool operator==(const Token& a, const Token& b) { return a.val == b.val; };
