#include<iostream>
using namespace std;
int f(int n,vector<int> &dp,int a[]){
    if(n==0){
        return 0;
    }
    if(dp[n]!=-1){
        return dp[n];
    }
    int left=f(n-1,dp,a)+abs(a[n]-a[n-1]);
    int right=INT_MAX;
    if(n>1){
        right=f(n-2,dp,a)+abs(a[n]-a[n-2]);
    }
    return dp[n]=min(left,right);
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<int> dp(n+1,-1);
    cout<<f(n-1,dp,a);
    return 0;
}