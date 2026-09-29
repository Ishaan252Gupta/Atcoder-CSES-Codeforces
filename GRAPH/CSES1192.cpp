#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
 int n,m;
int dc[]={0,0,-1,1};
int dr[]={1,-1,0,0};
vector<string> grid; 
vector<vector<bool>> visited;
bool isvalid(int nr,int nc){
    if(nr<0 || nr>=n || nc<0 || nc>=m){
        return false;
    }
    if(visited[nr][nc]==true || grid[nr][nc]=='#'){
        return false;
    }
return true;
}
void dfs(int i,int j){
    visited[i][j]=true;
    for(int k=0;k<4;k++){
        int nr=i+dr[k];
        int nc=j+dc[k];
        if(isvalid(nr,nc)){
            dfs(nr,nc);
        }
    }
}
int main(){
    int rooms=0;
    cin>>n>>m;
    grid.resize(n);
    visited.assign(n,vector<bool>(m,false));
    for(int i=0;i<n;i++){
        cin>>grid[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(grid[i][j]=='.' && !visited[i][j]){
                rooms++;
                dfs(i,j);

            }
        }
        
    }
cout<<rooms;
    return 0;
}