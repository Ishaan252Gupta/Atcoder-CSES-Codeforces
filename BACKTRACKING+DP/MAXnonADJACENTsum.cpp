#include<iostream>
using namespace std;
int sum1=0;
int sum2=0;
int f(int n,int a[],vector<int> &dp){
    if(n==0){
        return a[n];
    }
    if(n<0){
        return 0;
    }
    sum1=a[n]+f(n-2,a,dp);
    sum2=f(n-1,a,dp);
    return max(sum1,sum2);
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<int> dp;
    cout<<f(n,a,dp);
    return 0;
}