#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    int answerCount = 0;
    for (int j = 0; j < n; j++) {
        string s;
        cin >> s;
        string answer = "";
        for (int i = 0; i < s.size(); i++) {
            if (answer.back() == s[i]) {
                answer.pop_back();
            } else {
                answer += s[i];
            }
        }
        if (answer == "") {
            answerCount++;
        }
    }
    cout << answerCount;
}