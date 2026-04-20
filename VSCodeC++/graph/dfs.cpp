#include <bits/stdc++.h>
using namespace std;

vector<int> adj[10];
bool isvisited[10];

void dfs(int u) {
    isvisited[u] = true;
    cout << u << "를 방문!" << endl;

    for(auto e: adj[u]) {
        if (isvisited[e] != true)
            dfs(e);
    }
}

int main() {
    adj[1].push_back(2);
    adj[1].push_back(3);
    adj[2].push_back(4);
    adj[4].push_back(2);
    adj[2].push_back(5);

    dfs(1);
}