#include <bits/stdc++.h>
using namespace std;

int N;
int mp, mf, ms, mv;
vector<pair<int, vector<int>>> inputs;
vector<pair<int, vector<int>>> answers;  // 금액, idx

int main() {
    cin >> N;
    cin >> mp >> mf >> ms >> mv;

    for (int i = 0; i < N; i++) {
        int pi, fi, si, vi, ci;
        cin >> pi >> fi >> si >> vi >> ci;
        inputs.push_back({ci, {pi, fi, si, vi}});
    }

    for (int i = 0; i < (1 << N); i++) {
        vector<int> idxs;
        int sumPi = 0, sumFi = 0, sumSi = 0, sumVi = 0, sumCi = 0;
        for (int j = 0; j < N; j++) {
            int targetIdx = (1 << j); //j를 쉬프트 해야 함.
            if (i & targetIdx) {
                idxs.push_back(j+1);
                sumPi += inputs[j].second[0];
                sumFi += inputs[j].second[1];
                sumSi += inputs[j].second[2];
                sumVi += inputs[j].second[3];
                sumCi += inputs[j].first;
            }
        }
        if (sumPi >= mp && sumFi >= mf && sumSi >= ms && sumVi >= mv) {
            answers.push_back({sumCi, idxs});
        }
    }

    if (answers.size() == 0) {
        cout << -1;
        return 0;
    }

    int minimum = 987654321;
    vector<int> idxAnswer;
    for (auto e : answers) {
        if (minimum > e.first) {
            minimum = e.first;
            idxAnswer = e.second;
        } else if (minimum == e.first) {
            if (e.second < idxAnswer) idxAnswer = e.second;
        }
    }

    cout << minimum << '\n';
    for (auto e : idxAnswer) {
        cout << e << ' ';
    }
    return 0;
}