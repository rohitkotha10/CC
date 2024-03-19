/*
author:  rohitkotha10
created: 23.02.2024 20:15:25
*/
#include <bits/stdc++.h>
using namespace std;

#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0)
#define int long long

const int MAX = 2e5 + 5;
const int MOD = 1e9 + 7;

pair<int, int> chooseElement(
    vector<pair<int, int>>& positivePositions,
    vector<pair<int, int>>& negativePositions,
    int& positiveIndex,
    int& negativeIndex) {
    if (positiveIndex >= positivePositions.size()) {
        negativeIndex--;
        return negativePositions[negativeIndex + 1];
    }

    if (negativeIndex < 0) {
        positiveIndex++;
        return positivePositions[positiveIndex - 1];
    }

    if (positivePositions[positiveIndex].first < negativePositions[negativeIndex].first) {
        positiveIndex++;
        return positivePositions[positiveIndex - 1];
    } else if (positivePositions[positiveIndex].first > negativePositions[negativeIndex].first) {
        negativeIndex--;
        return negativePositions[negativeIndex + 1];
    } else {
        if (positivePositions[positiveIndex].second < negativePositions[negativeIndex].second) {
            positiveIndex++;
            return positivePositions[positiveIndex - 1];

        } else {
            negativeIndex--;
            return negativePositions[negativeIndex + 1];
        }
    }
}

void solve(int testCase) {
    int n, k;
    cin >> n >> k;
    vector<int> healths(n);
    vector<pair<int, int>> positivePositions;
    vector<pair<int, int>> negativePositions;

    for (int i = 0; i < n; i++) cin >> healths[i];
    for (int i = 0; i < n; i++) {
        int position;
        cin >> position;
        if (position > 0)
            positivePositions.emplace_back(position, healths[i]);
        else
            negativePositions.emplace_back(-position, healths[i]);
    }

    int positiveIndex = 0;
    int negativeIndex = negativePositions.size() - 1;
    int time = 0;
    int currentK = k;
    for (int i = 0; i < n; i++) {
        // strategy to eliminate ones closest first
        pair<int, int> element = chooseElement(positivePositions, negativePositions, positiveIndex, negativeIndex);
        int position = element.first;
        int health = element.second;

        if (health >= currentK) {
            if (position - time <= 0) {
                cout << "NO" << endl;
                return;
            }
            health -= currentK;
            time++;
            currentK = k;

            if (health > 0) {
                time += health / k;
                currentK = k - (health % k);

                if (position - time < 0) {
                    cout << "NO" << endl;
                    return;
                }
            }
        } else {
            currentK -= health;
        }
    }

    cout << "YES" << endl;
    return;
}

signed main() {
    IOS;
    int t = 1;
    cin >> t;
    int org = t;
    while (t--) solve(org - t);
}
