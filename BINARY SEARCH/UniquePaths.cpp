#include<iostream>
using namespace std;
int f(int x,int y,vector<vector<int>> &a,int n,int m,vector<vector<int>> &dp){
       if(x==n && y==m){
        return 1;
       }
    if(x > n || y>m){
        return 0;
    }
    if(dp[x][y]!=-1){
        return 1;
    }
    int b=0;
    int z=0;
    b=b+f(x+1,y,a,n,m,dp);
    b=b+f(x,y+1,a,n,m,dp);
    return dp[x][y]=b;
}
int main(){
    int n;
    int m;
    cin>>n;
    cin>>m;
    vector<vector<int>> a(n,vector<int>(m,0));
    vector<vector<int>> dp(n,vector<int>(m,-1));
   cout<< f(0,0,a,n-1,m-1,dp);

}