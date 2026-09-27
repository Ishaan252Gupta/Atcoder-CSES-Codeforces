#include<iostream>
using namespace std;
int sum=0;
void f(int i,int n,int a[],int k,vector<int> &dp){
    if(i==n){
    if(sum == k){
        for(auto it:dp){
            cout<<it<<" ";
        }
        cout<<endl;
        
    }
    return;
}
    dp.push_back(a[i]);
    sum=sum+a[i];
    f(i+1,n,a,k,dp);
    dp.pop_back();
    sum=sum-a[i];
    f(i+1, n, a,k,dp);
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
    vector<int> dp;
    f(0,n,a,k,dp);
}