#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        int m;
        cin>>m;

        vector<int> a(m);

        for(int i=0;i<m;i++){
            cin>>a[i];
        }

        sort(a.begin(),a.end());

        int flag=1;
        int l=0,r=m-1;
        int z=a[l]+a[r];
        if(m%2==0){
            while(a[l]<a[r]){
                if(a[l]+a[r]!=z){
                    flag=0;
                    break;
                }
                l++;
                r--;
            }
        }
        else{
            while(a[l]<a[r]){
                if(a[l]+a[r]!=z){
                    flag=0;
                    break;
                }
                l++;
                r--;
            }
            if(a[l]+a[l+1]!=z){
                flag=0;
            }
        }

        if(flag){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}