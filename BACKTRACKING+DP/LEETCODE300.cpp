#include<iostream>
using namespace std;
void f(int i,int n,int a[],vector<int> &dp,int &mac,  vector<int> &cp){
    if( cp[i]!=-1 && i==n){
        mac=max(mac,(int)dp.size());
        return;
    }
    else if(i==n){
        int fla=0;
        int c=0;
    for(int j=1;j<(int)dp.size();j++){
    if(dp[j] <= dp[j-1]){
        fla=1;
        break;
        }
        }
            
        
        if(fla==0){
            mac=max(mac,(int)dp.size());
        }
        cp[i]=mac;
        return;
    }
    dp.push_back(a[i]);
    f(i+1, n, a,dp,mac,cp);
    dp.pop_back();
    f(i+1, n, a,dp,mac,cp);
    

}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<int> dp;
    vector<int> cp(n,-1);

    int mac=1;
    f(0, n, a,dp,mac,cp);
    cout<<mac;
    return 0;
}