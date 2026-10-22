#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int k=0;
        int m;
        cin>>m;
        vector<char> a(m);
        for(int i=0;i<m;i++){
            cin>>a[i];
        }
        if(a[0]=='.'){
            k++;
            a[0]='w';
        }
        for(int i=1;i<m;i++){
            if(i<m-1 && a[i]=='.' && a[i-1]=='w' && a[i+1]=='.'){
                k=2;
                break;
                a[i]=a[i+1]='w';
            }
            else if(a[i]=='.'){
                a[i]='w';
                k++;
            }
        }
        cout<<k<<endl;
    }

    return 0;
}