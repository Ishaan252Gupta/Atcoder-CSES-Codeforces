#include<iostream>
using namespace std;
 int f( int n,vector<int> &dp,int a[],int k){
    if(n==0) return 0;
    if(dp[n]!=-1) return dp[n];
    int mi=INT_MAX;
    for(int j=1;j<=k;j++){
        if(n-j>=0){
            int jump=f(n-1,dp,a,k)+abs(a[n]-a[n-j]);
            mi = min(jump,mi);
        }
    }
    return mi;
 }
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int k;
    cin>>k;
    vector<int> dp(n+1,-1);
    cout<<f(n-1,dp,a,k);
    return 0;
}