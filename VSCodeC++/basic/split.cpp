#include <bits/stdc++.h>
using namespace std;

vector<string> split(const string& target, string delimeter) {
    vector<string> result;
    int start = 0;
    int end = target.find(delimeter);
    while(end != string::npos) {
        result.push_back(target.substr(start, end - start));
        start = end + delimeter.size();
        end = target.find(delimeter, start);
    }
    result.push_back(target.substr(start));
    return result;
}

int main() {
    string target = "apple,banana,grape,pear";
    auto result = split(target, ",");
    for (auto e: result) {
        cout << e << ' ';
    }
}