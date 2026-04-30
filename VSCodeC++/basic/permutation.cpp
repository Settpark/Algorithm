#include <bits/stdc++.h>
using namespace std;

const int v = 3;
int arr[v] = {1, 2, 3};

void makePermutation(int n, int r, int depth) {
    if (r == depth) {
        for (int i = 0; i<r; i++) {
            cout << arr[i] << ' ';
        }
        cout << endl;
        return;
    }

    for(int i = depth; i < n; i++) {
        swap(arr[i], arr[depth]);
        makePermutation(n, r, depth + 1);
        swap(arr[i], arr[depth]);
    }
}

int main() {
    makePermutation(3, 3, 0);
}