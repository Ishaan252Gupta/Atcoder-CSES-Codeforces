#include<iostream>
using namespace std;
int f(int x,int n,vector<int> &a,vector<int> &dp){
    if(x==n){
        return 100000;
    }
    if(x<n){
        if(a[x]==0){
            return 0;
        }
    }
    if(dp[x]!=-1) return dp[x];
    int z=INT_MIN;
    for(int i=1;i<=a[x];i++){
        if(x+i<=n){
           z= max(z,f(x+i,n,a,dp));
        }
    }
    if(z>0){
        return dp[x]=1;
    }
    return dp[x]=0;
}
int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<int> dp(n,-1);
    cout<<f(0,n-1,a,dp);
    return 0;
}