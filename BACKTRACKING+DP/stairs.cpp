#include<iostream>
using namespace std;
int h=0;
void f(int n){
    if(n<0){
        return;
    }
    if(n==0){
        h++;
    }
    f(n-1);
    f(n-2);
    
}
int main(){
    int n;
    cin>>n;
   
    f(n);
    cout<<h;
}