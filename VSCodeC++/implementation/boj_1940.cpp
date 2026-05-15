#include <bits/stdc++.h>
using namespace std;

int N, M;
int arr[15001];
int answer = 0;

void combi(int start, vector<int>& index) {
    if (index.size() == 2) {
        int cal = arr[index[0]] + arr[index[1]];
        if (cal == M) {
            answer++;
        }
        return;
    }

    for (int i = start + 1; i < N; i++) {
        index.push_back(i);
        combi(i, index);
        index.pop_back();
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M;

    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    vector<int> index;
    combi(-1, index);

    cout << answer;
}