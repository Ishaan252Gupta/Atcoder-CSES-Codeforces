#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        vector<int> b;
        vector<int> c;
        int m;
        cin>>m;
        vector<int> a(m);
        for(int i=0;i<m;i++){
    cin>>a[i];
}
        int mini=100000;
        for(int i=0;i<m;i++){
            if(a[i]==1){
                continue;
            }
            mini=min(mini,a[i]);
        }
        for(int i=0;i<m;i++){
            if(a[i]==1){
                b.push_back(a[i]);
            }
            else if(a[i]%mini!=0){
                b.push_back(a[i]);
            }
            else{
                c.push_back(a[i]);
            }
        }
        if(b.size()==0 || c.size()==0){
            cout<<-1;
        }
        else{
            cout<<b.size()<<" "<<c.size()<<endl;
            for(int i=0;i<b.size();i++){
                cout<<b[i]<<" ";
            }
            cout<<endl;
            for(int i=0;i<c.size();i++){
                cout<<c[i]<<" ";
            }
            cout<<endl;
        }
    }
}