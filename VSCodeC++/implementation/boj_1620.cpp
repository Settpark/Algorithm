#include <bits/stdc++.h>
using namespace std;

int N, M;
unordered_map<string, int> m;
unordered_map<int, string> m2;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    cin >> N >> M;
    int count = 1;
    for (int i = 0; i < N; i++) {
        string s;
        cin >> s;
        m[s] = count;
        m2[count] = s;
        count++;
    }

    for (int i = 0; i < M; i++) {
        string s; cin >> s;
        if (atoi(s.c_str()) == 0) {
            cout << m[s] << '\n';
        } else {
            cout << m2[atoi(s.c_str())] << '\n';
        }
    }
    return 0;
}