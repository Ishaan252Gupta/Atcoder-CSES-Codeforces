#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int m;
        cin>>m;
        int p;
        int q;
        cin>>p;
        cin>>q;
        if(m==1){
            cout<<"YES";
            continue;
        }
        if(m%2!=0){
            int k=(m-1)/2;
            if((p>k || q>k+1 ) ||(p>k+1 || q>k)){
                cout<<"NO";
            }
            else{
                cout<<"YES";
            }
            continue;
        }
        if(m%2==0){
            int  k= m/2;
            if(p>k || q>k){
                cout<<"NO";
            }
            else{
                cout<<"YES";
            }
            continue;
        }
    }
    return 0;
}