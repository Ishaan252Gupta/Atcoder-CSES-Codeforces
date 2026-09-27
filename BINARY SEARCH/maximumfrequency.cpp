#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

int f(vector<int> a,int n){
    unordered_map<int,int> m;
    for(auto it:a){
        m[it]=m[it]+1;
    }
    int k=INT_MIN;
    int ans=-1;
    for(auto it:m){
        if(it.second>k){
            k=it.second;
            ans=it.first;
        }
    }
    return ans;

}
int main(){
    int n;
    cin>>n;

    vector<int> a(n);
    for(int i=0;i<n;i++){

            cin>>a[i];
        
    }
    cout<<f(a,n);
    return 0;
}