#include <bits/stdc++.h>
using namespace std;

string s;
string result;
char mid;
int invalid = 0;
int cnt[101];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> s;

    for (int i = 0; i < s.size(); i++) {
        cnt[(int)s[i]]++;
    }

    for (int i = 'Z'; i >= 'A'; i--) {
        if (cnt[i] % 2 == 1) {
            cnt[i]--;
            invalid++;
            mid = i;
        }

        if (invalid >= 2) break;
        for (int j = 0; j < cnt[i]; j += 2) {
            result = (char)i + result;
            result += (char)i;
        }
    }

    if (invalid >= 2)
        cout << "I'm Sorry Hansoo";
    else {
        if (invalid == 1) {
            result.insert(result.begin() + (result.size() / 2), mid);
        }
        cout << result << '\n';
    }
}