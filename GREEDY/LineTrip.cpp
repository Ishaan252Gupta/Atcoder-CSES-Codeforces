#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool check(int mid,vector<int> a,int x){
    int prev=0;
    int curr=a[0];

    if(curr-prev>mid){
        return false;
    }

    for(int i=1;i<a.size();i++){
        prev=curr;
        curr=a[i];

        if(curr-prev>mid){
            return false;
        }
    }
    if(2*(x-curr)>mid){
        return false;
    }

    return true;
}

int main(){
    int n;
    cin>>n;

    int m,x;

    while(n--){
        cin>>m>>x;

        vector<int> a(m);

        for(int i=0;i<m;i++){
            cin>>a[i];
        }

        int lo=0;
        int hi=x;

        while(lo<hi){
            int mid=lo+(hi-lo)/2;

            if(check(mid,a,x)){
                hi=mid;
            }
            else{
                lo=mid+1;
            }
        }

        cout<<lo<<endl;
    }
    return 0;
}