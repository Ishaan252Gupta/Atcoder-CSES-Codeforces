#include<iostream>
#include<vector>
#include<algorithm>
#include <numeric>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i =0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    long long z=accumulate(a.begin(),a.end(),0ll);
    if(2*a[n-1]>z){
        cout<<2*a[n-1];
    }
    else{
        cout<<z;
    }

    return 0;
}