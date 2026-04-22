#include <bits/stdc++.h>
using namespace std;

int N;
int arr[65][65];

string conqueror(int ey, int ex, int sy, int sx) {
    int startValue = arr[sy][sx];
    bool isvalid = true;

    for (int i = sy; i <= ey; i++) {
        for (int j = sx; j <= ex; j++) {
            if (arr[i][j] != startValue) {
                isvalid = false;
                break;
            }
        }
        if (!isvalid) break;
    }
    if (isvalid) return to_string(startValue);
    int midY = (ey + sy) / 2;
    int midX = (ex + sx) / 2;
    return "(" + conqueror(midY, midX, sy, sx) +
           conqueror(midY, ex, sy, midX + 1) +
           conqueror(ey, midX, midY + 1, sx) +
           conqueror(ey, ex, midY + 1, midX + 1) + ")";
}

int main() {
    cin >> N;

    for (int i = 1; i <= N; i++) {
        string input;
        cin >> input;
        for (int j = 0; j < input.size(); j++) {
            arr[i][j + 1] = input[j] - '0';
        }
    }

    cout << conqueror(N, N, 1, 1);
}