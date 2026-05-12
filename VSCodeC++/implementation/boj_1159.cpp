#include <bits/stdc++.h>
using namespace std;

int n;
unordered_map<char, int> m;

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        string k;
        cin >> k;
        char temp = k[0];
        m[temp]++;
    }

    string answer = "";

    for (auto e : m) {
        char key = e.first;
        int value = e.second;

        if (value >= 5) {
            answer += key;
        }
    }

    if (answer == "") {
        cout << "PREDAJA" << endl;
    } else {
        sort(answer.begin(), answer.end());
        cout << answer << endl;
    }
}