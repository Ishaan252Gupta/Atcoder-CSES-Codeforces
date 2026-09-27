#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_set>
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<int> a(n);
	
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int k;
	cin>>k;
	int l=0;
	int r=l+k-1;
	while(r<n){
		unordered_set<int> f;
		for(int i=l;i<=r;i++){
			f.insert(a[i]);
		}
		cout<<f.size()<<"\n";
	r++;
	l++;
	}
}