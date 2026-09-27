#include<iostream>
#include<vector>
using namespace std;
int main(){
     int n;
     cin>>n;
        vector<int> a(n);
        long long ans=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=1;i<n;i++){
            if(a[i]<a[i-1]){
                ans=ans+(a[i-1]-a[i]);
                a[i]=a[i-1];
            }
        }
        cout<<ans<<endl;
}