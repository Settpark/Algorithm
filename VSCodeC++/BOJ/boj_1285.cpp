#include <bits/stdc++.h>
using namespace std;

vector<int> coins(21);
int n;

int main() {
    // 뒷면이 위를 향하는 개수를 최소
    cin >> n;

    for (int i = 0; i < n; i++) {
        string k;
        cin >> k;
        for (int j = 0; j < k.size(); j++) {
            if (k[j] == 'T') {
                coins[i] += (1 << j);
            }
        }
    }
    int minimum = 987654321;
    for (int i = 0; i < (1 << n); i++) {
        auto copied = coins;
        for (int j = 0; j < n; j++) {
            int targetIdx = (1 << j);
            if (i & targetIdx) copied[j] ^= (1 << n) - 1; //i, j 잘 못 써서 메모리초과 발생
        }
        int currentCount = 0;
        for (int i = 0; i < n; i++) {
            int tailCount = 0;
            int targetBit = (1 << i);
            for (int j = 0; j < n; j++) {
                if (copied[j] & targetBit) {  // T라면
                    tailCount++;
                }
            }
            currentCount += min(tailCount, n - tailCount);
        }
        minimum = min(minimum, currentCount);
    }
    cout << minimum;
}