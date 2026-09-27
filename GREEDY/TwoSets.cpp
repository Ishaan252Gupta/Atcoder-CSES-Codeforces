#include<iostream>
#include<vector>
#include<algorithm>
#include <numeric>
using namespace std;
int main(){
    long long n;
    cin>>n;
    long long z=(n*(n+1))/2;
    if (((n*(n+1))/2)%2!=0){
        cout<<"NO";
    }
    else{
        vector<long long> set1;
        long long s1=0;
        vector<long long> set2;
        for(int i=n;i>=1;i--){
            if(s1+i>z/2){
                set2.push_back(i);
                
            }
            else{
                set1.push_back(i);
                s1+=i;
            }
        }
        cout<<"YES"<<endl;
        cout<<set1.size()<<endl;
        for(int i=0;i<set1.size();i++){
            cout<<set1[i]<<" ";
        }
        cout<<"\n";
        cout<<set2.size()<<endl;
        for(int i=0;i<set2.size();i++){
            cout<<set2[i]<<" ";
        }

    }
}