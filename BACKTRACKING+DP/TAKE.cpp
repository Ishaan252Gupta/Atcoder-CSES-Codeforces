#include<iostream>
using namespace std;
void f(int i,int n,int a[],vector<int> &dp){
    if(i==n){
        for(auto i:dp){
            cout<<i<<" ";
        }
        cout<<endl;
        return;
    }
    dp.push_back(a[i]);
    f(i+1, n, a,dp);
    dp.pop_back();
    f(i+1, n, a,dp);

}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<int> dp;
    f(0, n, a,dp);
    return 0;
}