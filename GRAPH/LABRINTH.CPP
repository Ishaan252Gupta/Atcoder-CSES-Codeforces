#include <iostream>
#include <vector>
using namespace std;
vector<int> drow = {-1, 0, 1, 0};
vector<int> dcol = {0, 1, 0, -1};
vector<char> directions = {'U', 'R', 'D', 'L'};
bool check(int x, int y,vector<vector<char>> &grid,vector<vector<bool>> &vis) {
    if (x >= 0 && y >= 0 &&
        x < grid.size() &&
        y < grid[0].size() &&
        !vis[x][y]) {
        return true;
    }
    return false;
}
void paths(int x, int y, int fx, int fy,vector<vector<char>> &ans,vector<vector<char>> &grid,vector<char> temp,vector<vector<bool>> &vis) {
    if (x == fx && y == fy) {
        ans.push_back(temp);
        return;
    }
    vis[x][y] = true;
    for (int i = 0; i < 4; i++) {
        int nx = x + drow[i];
        int ny = y + dcol[i];
        if (check(nx, ny, grid, vis)) {         
            if (grid[nx][ny] == '#')
                continue;
            temp.push_back(directions[i]);
            paths(nx, ny, fx, fy, ans, grid, temp, vis);
            temp.pop_back();
        }
    }
    vis[x][y] = false;
}
int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<char>> grid(n, vector<char>(m));
    vector<char> temp;
    vector<int> start = {0, 0};
    vector<int> end = {0, 0};

    vector<vector<bool>> vis(n, vector<bool>(m, false));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {

            cin >> grid[i][j];

            if (grid[i][j] == 'A') {
                start[0] = i;
                start[1] = j;
            }

            if (grid[i][j] == 'B') {
                end[0] = i;
                end[1] = j;
            }
        }
    }

    vector<vector<char>> ans;

    paths(start[0], start[1],end[0], end[1],ans, grid, temp, vis);
        if(ans.size() ==0){
            cout<<"NO";
            return 0;
        }
        vector<char> min;
        int mini=1000000000; 
    for (int i = 0; i < ans.size(); i++) {
        if(mini>ans[i].size()){
            mini=ans[i].size();
            min=ans[i];
        }
    }
    cout<<"YES\n";
    cout<<mini<<"\n";
    for(int i=0;i<min.size();i++){
        cout<<min[i];
    }

    return 0;
}