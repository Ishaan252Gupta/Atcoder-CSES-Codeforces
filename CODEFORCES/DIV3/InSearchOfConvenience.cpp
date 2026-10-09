#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        vector<int> arr(3);
        for(int i=0;i<3;i++){
            cin>>arr[i];
        }
        for(int i=0;i<n;i++){
        for(int i=arr[0]-arr[2];i<=arr[0]+arr[2];i++){
            int  q= sqrt(((arr[2]*arr[2])-(i*i)));
            if (q*q == (arr[2]*arr[2])-(i*i)){
                cout<<i << " "<<q;
                break;
            }
        }
    }
    }
    return 0;
}