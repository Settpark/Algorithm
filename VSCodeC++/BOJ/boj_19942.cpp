#include <bits/stdc++.h>
using namespace std;

int n;
int mp, mf, ms, mv;
int pi, fi, si, vi, ci;
map<int, vector<int>> m;

int main() {
    cin >> n;
    cin >> mp >> mf >> ms >> mv;
    for (int i = 1; i <= n; i++) {
        cin >> pi >> fi >> si >> vi >> ci;
        vector<int> v = {pi, fi, si, vi, ci};
        m[i] = v;
    }

    vector<pair<int,vector<int>>> v1;
    for (int i = 0; i < (1 << n); i++) {
        vector<int> ate = {0, 0, 0, 0, 0};
        vector<int> answerVector;
        for(int j = 0; j < n; j++) {
            int shifted = (1 << j);
            if (i & shifted) {
                answerVector.push_back(j+1);
                vector<int> selected = m[j+1];
                for (int l = 0; l<5; l++) {
                    ate[l] += selected[l];
                }
            }
        }
        if (ate[0] >= mp && ate[1] >= mf && ate[2] >= ms && ate[3] >= mv) {
            v1.push_back({ate[4], answerVector});
        }
    }
    if (v1.size() == 0) {
        cout << -1;
        return 0;
    }

    int minPrice = 987654321;
    vector<vector<int>> finalAnswers;
    for (auto e: v1) {
        if (minPrice == e.first) {
            minPrice = e.first;
            finalAnswers.push_back(e.second);
        } else if (minPrice > e.first) {
            minPrice = e.first;
            finalAnswers.clear();
            finalAnswers.push_back(e.second);
        }
    }

    cout << minPrice << '\n';
    vector<int> finalAnswer = finalAnswers[0];
    for(auto e: finalAnswers) {
        if (finalAnswer > e) {
            finalAnswer = e;
        }
    }

    for (auto k: finalAnswer) {
        cout << k << ' ' ;
    }

    return 0;
}