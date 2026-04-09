#include <bits/stdc++.h>

using namespace std;

int height, width;
int arr[505][505];
bool isvisited[505][505];

int dx[4] = {1, 0, 0, -1};
int dy[4] = {0, -1, 1, 0};

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> height >> width;
    
    for (int i = 0; i<height; i++) {
        for (int j = 0; j<width; j++) {
            cin >> arr[i][j];
        }
    }
    
    queue<pair<int, int>> q;
    int max_value = 0;
    int area = 0;
    
    for (int i = 0; i<height; i++) {
        for (int j = 0; j<width; j++) {
            if (isvisited[i][j] || arr[i][j] == 0) continue;
            
            q.push({i, j});
            isvisited[i][j] = 1;
            int current_value = 1;
            area++;
            
            while(!q.empty()) {
                auto f = q.front(); q.pop();
                for(int l = 0; l<4; l++) {
                    int ny = f.first + dy[l];
                    int nx = f.second + dx[l];
                    
                    if (ny < 0 || nx < 0 || ny >= height || nx >= width) continue;
                    if (isvisited[ny][nx] == 1 || arr[ny][nx] == 0) continue;
                    
                    isvisited[ny][nx] = 1;
                    q.push({ny, nx});
                    current_value++;
                }
            }
            max_value = max(current_value, max_value);
        }
    }
    
    cout << area << '\n' << max_value;
}
