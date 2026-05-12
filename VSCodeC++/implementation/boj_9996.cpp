#include <bits/stdc++.h>
using namespace std;

vector<string> split(string target, string delimeter) {
    vector<string> result;
    int start = 0;
    int end = target.find(delimeter);
    while (end != string::npos) {
        result.push_back(target.substr(start, end - start));
        start = end + delimeter.size();
        end = target.find(delimeter, start);
    }
    result.push_back(target.substr(start));
    return result;
}

int main() {
    int c;
    cin >> c;
    string pattern;
    cin >> pattern;

    vector<string> splited = split(pattern, "*");
    string first = splited[0];
    string second = splited[1];

    // cout << "FIRST: " << first << endl;
    // cout << "SECOND: " << second << endl;


    for (int i = 0; i < c; i++) {
        string temp;
        cin >> temp;
        string splitedFirst = temp.substr(0, first.size());
        string splitedSecond = temp.substr(temp.size() - second.size());

        // cout << "SF: " << splitedFirst << endl;
        // cout << "SS: " << splitedSecond << endl;

        if (splitedFirst == first && splitedSecond == second) {
            cout << "DA" << endl;
        } else {
            cout << "NE" << endl;
        }
    }
}