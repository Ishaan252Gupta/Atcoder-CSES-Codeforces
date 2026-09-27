#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    long long  n;
    cin>>n;
    vector<long long > a(n);
    for(long long i=0;i<n;i++){
        cin>>a[i];
    }
    long long x=INT_MAX;
    long long z=1;
    long long k=a[0];
    for(long long  i=1;i<n;i++){
        if(a[i]<k){
            k=a[i];
        }
        else{
            z++;

        }

    }
    cout<<z;




    return 0;
}