#include<iostream>
using namespace std;
int f(int x,int y,vector<vector<int>> &a,int n,int m,vector<vector<int>> &dp){
    if(x>=n || y>=m){
        return 1000000;
    }
    if(x==n-1 && y==m-1) return a[x][y];
    if(dp[x][y]!=-1)return dp[x][y];
    int sum=a[x][y]+f(x+1,y,a,n,m,dp);
   int  sum2=a[x][y]+f(x,y+1,a,n,m,dp);
    return dp[x][y]=min(sum,sum2);

}
int main(){
    int n,m;
    cin>>n;
    cin>>m;
   vector<vector<int>> a(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    vector<vector<int>> dp(n,vector<int>(m,-1));
    cout<<f(0,0,a,n,m,dp);
}