#include <bits/stdc++.h>
using namespace std;

const int V = 10;
vector<int> arr[V];
bool isvisited[V];

void findPath(int from) {
    isvisited[from] = 1;
    cout << from << "방문!" << '\n';

    for(int i = 0; i<arr[from].size(); i++) {
        int next = arr[from][i];
        if (isvisited[next]) continue;
        findPath(next);
    }
    return;
}

int main() {
    arr[1].push_back(2);
    arr[2].push_back(1);
    arr[1].push_back(3);
    arr[3].push_back(1);
    arr[3].push_back(4);
    arr[4].push_back(3);

    for(int i = 0; i<V; i++) {
        if (!arr[i].empty() && !isvisited[i]) {
            findPath(i);
        }
    }
}