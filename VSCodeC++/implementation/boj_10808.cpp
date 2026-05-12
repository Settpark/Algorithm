#include <bits/stdc++.h>
using namespace std;

int arr[26];

int main() {
    string s;
    cin >> s;

    for (int i = 0; i < s.size(); i++) {
        int idx = int(s[i]) - 97;
        arr[idx]++;
    }
    
    for(auto e: arr) {
        cout << e << ' ';
    }