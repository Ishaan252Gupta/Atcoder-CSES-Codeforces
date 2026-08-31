#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int b;
    cin>>b;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }   
    int c=0;
    int x=0;
    int l=0;
    int r=n-1;
    sort(a.begin(), a.end());
    while(l<=r){
        if(a[l]+a[r]<=b){
            c++;
            l++;
            r--;
        }
        else{
            c++;
            r--;
        }
    }
    cout<<c<<endl;
    return 0;
}