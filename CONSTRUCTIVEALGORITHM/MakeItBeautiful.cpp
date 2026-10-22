#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        vector<int> a(k);
        for(int i=0;i<k;i++){
            cin>>a[i];
        }
        int fc=0;
        int s=a[0];
 
        for(int j=1;j<k;j++){
            if(s==a[j]){
                fc=1;
                break;
            }
            s=s+a[j];
        }
 
        if(fc==1){
            sort(a.begin(),a.end(),greater<int>());
            int q=a.size()-1;
            int sum=a[0];
            int fl=0;
            
            if(a[0]==a[q]){
                cout<<"NO"<<endl;
                continue;
            }
 
            for(int b=1;b<k-1;b++){
                if(sum==a[b]){
                    swap(a[b],a[q--]);
 
                    if(sum==a[b]){
                        fl=1;
                        break;
                    }
 
                    sum=sum+a[b];
                }
                else{
                    sum=sum+a[b];
                }
            }
 
            if(fl==0){
                cout<<"YES"<<endl;
                for(int y=0;y<k;y++){
                    cout<<a[y]<<" ";
                }
                cout<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        else{
            cout<<"YES"<<endl;
            for(int y=0;y<k;y++){
                cout<<a[y]<<" ";
            }
            cout<<endl;
        }
    }
 
    return 0;
}