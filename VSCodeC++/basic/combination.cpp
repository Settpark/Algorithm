#include <bits/stdc++.h>
using namespace std;

int n = 5, k = 3;
vector<int> a = {1, 2, 3, 4, 5};
void combi(int start, vector<int>& b) {
    if (k == b.size()) {
        for (int i = 0; i < b.size(); i++) {
            cout << a[b[i]];
        }
        cout << endl;
        return;
    }

    for (int i = start + 1; i < n; i++) {
        b.push_back(i);
        combi(i, b);
        b.pop_back();
    }
}

int main() {
    vector<int> b;  // b는 index를 모아놓는 배열이다.
    combi(-1, b);
}
