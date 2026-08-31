#include<iostream>
using namespace std;
int f(vector<int> &dp,int low,int high){
    int mid=(low+high)/2;
    if(dp[mid-1]==dp[mid] || dp[mid+1]==dp[mid]){
        return mid;
    }
    f(dp,low,mid-1);
    f(dp,mid+1,high);
    return -1;


}
int main(){
    int n;
    cin>>n;
    vector<int> dp(n,0);
    for(int i=0;i<n;i++){
        cin>>dp[i];
    }
    sort(dp.begin(),dp.end());    
    dp.begin();
    cout<<f(dp,0,n-1);
}