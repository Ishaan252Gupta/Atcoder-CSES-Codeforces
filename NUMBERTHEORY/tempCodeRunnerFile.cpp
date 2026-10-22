#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
using ll=long long;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int f=0;
        ll m;
        cin>>m;
        ll k;
        cin>>k;
        for(int i=1;i<=m/2;i++){
            if((m-(2*i))%k == 0){
                    if(m-(2*i) != 0){
                cout<<"YES"<<endl;
                f=1;
                break;
                    }
            }
        }
        if(f==0){
            cout<<"NO"<<endl;
        }
    }
    return 0;
}