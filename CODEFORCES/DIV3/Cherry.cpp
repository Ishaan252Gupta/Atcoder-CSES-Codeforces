#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
using ld=long long;
int main(){
    ld n;
    cin>>n;
    ld m;
    for(ld i=0;i<n;i++){
        cin>>m;
        vector<ld> a(m);
        for(ld i=0;i<m;i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        ld k=a[m-1];
        for(ld i=m-2;i>=0;i--){
            if(k!=a[i]){
                cout<<k*a[i];
                break;
            }
        }
    }
    return 0;
}