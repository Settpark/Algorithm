#include <bits/stdc++.h>
using namespace std;

int N, K;
int sums[100001];

int main() {
    cin >> N >> K;

    for (int i = 1; i <= N; i++) {
        int temp;
        cin >> temp;
        sums[i] = sums[i - 1] + temp;
    }
    int result = INT_MIN;
    for (int i = K; i <= N; i++) {
        result = max(result, sums[i] - sums[i - K]);
    }

    cout << result;
}