#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<pair<int,int>> a(n);
    long long t=0;
    for(int i=0;i<n;i++){
        cin>>a[i].first>>a[i].second;
    }
    long long k=0;
    sort(a.begin(),a.end());
    for(int i=0;i<n;i++){
        k=k+a[i].first;
        t+=a[i].second-k;
        
    }
    cout<<t<<endl;
    return 0;

}