#include <bits/stdc++.h>
using namespace std;

vector<int> indexArr;
vector<int> talls;
vector<int> answer;

void combi(int n, int r, int start) {
    if (r == indexArr.size()) {
        int sum = 0;
        for (int i = 0; i < indexArr.size(); i++) {
            sum += talls[indexArr[i]];
        }
        if (sum == 100) {
            for (int i = 0; i < indexArr.size(); i++) {
                answer.push_back(talls[indexArr[i]]);
            }
            sort(answer.begin(), answer.end());
        }
        return;
    }

    for (int i = start + 1; i < n; i++) {
        indexArr.push_back(i);
        combi(n, r, i);
        indexArr.pop_back();
    }
}

int main() {
    int n = 9;
    int r = 7;
    for (int i = 0; i < n; i++) {
        int k; cin >> k;
        talls.push_back(k);
    }
    combi(n, r, -1);
    for(auto e: answer) {
        cout << e << '\n';
    }
}