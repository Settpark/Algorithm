#include <bits/stdc++.h>
using namespace std;

int main() {
    int tc;
    cin >> tc;
    cin.ignore();
    for (int i = 0; i < tc; i++) {
        unordered_map<string, vector<string>> m;
        int wc;
        cin >> wc;
        for (int j = 0; j < wc; j++) {
            string a,b ;
            cin >> a >> b;

            m[b].push_back(a);
        }
        int sum = 1;

        for (auto e : m) {
            // cout << "SIZE:" << e.second.size() << endl;
            sum *= e.second.size() + 1;
        }

        cout << sum - 1 << endl;
    }
}