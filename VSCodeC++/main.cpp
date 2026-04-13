#include <bits/stdc++.h>
using namespace std;

int n;
int mp, mf, ms, mv;
vector<vector<int>> inputs(16);
vector<pair<int, vector<int>>> answers;

int main() {
    cin >> n;
    cin >> mp >> mf >> ms >> mv;

    for (int i = 0; i < n; i++) {
        int pi, fi, si, vi, ci;
        cin >> pi >> fi >> si >> vi >> ci;
        inputs[i].push_back(pi);
        inputs[i].push_back(fi);
        inputs[i].push_back(si);
        inputs[i].push_back(vi);
        inputs[i].push_back(ci);
    }

    for (int i = 0; i < (1 << n); i++) {
        int a = 0, b = 0, c = 0, d = 0, e = 0;
        vector<int> answerIdxs;
        for (int j = 0; j < n; j++) {
            int targetIdx = (1 << j);
            if (i & targetIdx) {
                answerIdxs.push_back(j + 1);
                a += inputs[j][0];
                b += inputs[j][1];
                c += inputs[j][2];
                d += inputs[j][3];
                e += inputs[j][4];
                if (a >= mp && b >= mf && c >= ms && d >= mv) {
                    answers.push_back({e, answerIdxs});
                }
            }
        }
    }
    if (answers.size() == 0) {
        cout << -1;
        return 0;
    }

    int minimum = 987654321;
    vector<int> finalAnswer;
    for (auto e: answers) {
        if (e.first < minimum) {
            minimum = e.first;
            finalAnswer = e.second;
        } else if (e.first == minimum) {
            if (finalAnswer > e.second) {
                finalAnswer = e.second;
            }
        }
    }
    cout << minimum << '\n';
    for (auto e: finalAnswer) {
        cout << e << ' ';
    }
    return 0;
}