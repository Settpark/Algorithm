#include <bits/stdc++.h>
using namespace std;

int N, M, J;

int main() {
    cin >> N >> M;
    cin >> J;

    int left = 1;
    int right = left + M - 1;
    int totalMovement = 0;
    for (int i = 0; i < J; i++) {
        int appleIndex;
        cin >> appleIndex;

        right = left + M - 1;

        if (appleIndex > right) {
            int movement = abs(appleIndex - right);
            left += movement;
            totalMovement += movement;
        } else if (appleIndex < left) {
            int movement = abs(appleIndex - left);
            left -= movement;
            totalMovement += movement;
        }
    }

    cout << totalMovement;
}