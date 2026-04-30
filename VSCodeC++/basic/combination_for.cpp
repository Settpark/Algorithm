#include <bits/stdc++.h>
using namespace std;

int n = 5, k = 3;
vector<int> a = {1, 2, 3, 4, 5};

int main() {
    for (int i = 0; i<n; i++) {
        for (int j = i+1; i<n; i++) {
            for (int k = j+1; k<n; k++) {
                cout << a[i] << " " << a[j] << " " << a[k] << endl;
            }
        }
    }
}