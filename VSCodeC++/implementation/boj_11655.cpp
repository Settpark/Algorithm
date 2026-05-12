#include <bits/stdc++.h>
using namespace std;

int main() {
    int shift = 13;
    string s;
    getline(cin, s);

    for (int i = 0; i < s.length(); i++) {
        if ((int)s[i] >= 65 && (int)s[i] <= 90) {
            s[i] = (s[i] - 'A' + shift) % 26 + 'A';
        }
        if ((int)s[i] >= 97 && (int)s[i] <= 122) {
            s[i] = (s[i] - 'a' + shift) % 26 + 'a';
        }
    }
    
    cout << s << endl;
}