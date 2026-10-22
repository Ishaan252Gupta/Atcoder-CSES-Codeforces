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
        if(m%2==0){
            cout<<"YES";
        }
        else if((m-k)%2==0){
        cout<<"YES";
        }
        else{
        cout<<"NO";
        }
        cout<<endl;
    }
    return 0;
}