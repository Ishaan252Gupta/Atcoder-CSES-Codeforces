#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    long long n;
    cin >> n;

    vector<pair<long long, long long>> a(n);

    long long t = 0;

    for(long long i = 0; i < n; i++){
        cin >> a[i].first >> a[i].second;
    }

    long long k = 0;

    sort(a.begin(), a.end(), [](auto a, auto b) {
        return a.second < b.second;
    });
    long long lastend=-1;
    for(long long i = 0; i < n ; i++){
        if(lastend <= a[i].first){
            k++;
            lastend=a[i].second;
        }
    }

    cout << k;

    return 0;
}