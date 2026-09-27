#include<iostream>
using namespace  std;
bool isafe(int x,int y,int n,int m,vector<vector<int>> &vis,vector<vector<int>> &maze){
    if(x>=0 && y>=0 && x<n && y<m && vis[x][y]!=1 && maze[x][y]==1 ){
        return 1;
    }
    return 0;
}
void path(int x,int y,int n,int m,string str,vector<vector<int>> &vis,vector<vector<int>> &maze,vector<string> &ans){
    if(x==n-1 && y==m-1){
       ans.push_back(str);
       return; 
    }
    if(maze[0][0]==0){
        return ;
    }
    //down
    vis[x][y]=1;
    if(isafe(x+1,y,n,m,vis,maze)){
        path(x+1,y,n,m,str+"R",vis,maze,ans);
    }
    if(isafe(x-1,y,n,m,vis,maze)){
        path(x-1,y,n,m,str+"l",vis,maze,ans);
    }
    if(isafe(x,y+1,n,m,vis,maze)){
        path(x,y+1,n,m,str+"D",vis,maze,ans);
    }
    if(isafe(x,y-1,n,m,vis,maze)){
        path(x,y-1,n,m,str+"U",vis,maze,ans);
    }
    vis[x][y]=0;
}
vector<string> maz(int n,int m,vector<vector<int>> &maze){
    int x=0;
    int y=0;
    vector<vector<int>> vis(n,vector<int> (m,0));
    vector<string> ans;
    string str="";
    path(0,0,n,m,str,vis,maze,ans);
    return ans;

}
int main(){
    int n,m;
    cin>>n;
    cin>>m;
    vector<vector<int>> maze(n,vector<int> (m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>maze[i][j];
        }
    }
    vector<string> ans = maz(n,m,maze);
    for(auto s:ans){
        cout<<s<<endl;
    }
    return 0;
}

