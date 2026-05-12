#include <bits/stdc++.h>
using namespace std;

int times[101];

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    for (int i = 0; i < 3; i++) {
        int f, s;
        cin >> f >> s;
        for (int j = f; j < s; j++) {
            times[j]++;
        }
    }

    int cost = 0;

    for (int i = 1; i <= 100; i++) {
        if (times[i] >= 3) {
            cost += c * 3;
        } else if (times[i] == 2) {
            cost += b * 2;
        } else if (times[i] == 1) {
            cost += a * 1;
        } else if (times[i] == 0) {

        }
    }

    cout << cost << endl;
}