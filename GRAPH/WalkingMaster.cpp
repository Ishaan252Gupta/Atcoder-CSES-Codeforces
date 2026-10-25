#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        vector<int> d(4);
        for(int i=0;i<4;i++){
            cin>>d[i];
        }
        if(d[1]>d[3]){
            cout<<-1<<endl;
            continue;
        }
        int k=d[3]-d[1];
        d[0]=d[0]+k;
        if(d[0]<d[2]){
            cout<<-1<<endl;
            continue;
        }
        int z=(d[0]-d[2])+k;
        cout<<z<<endl;

    }
    return 0;
}