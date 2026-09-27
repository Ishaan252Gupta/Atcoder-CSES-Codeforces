#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    long long n;
    cin >> n;

    long long s = 0;
    vector<long long> a(n);

    for(long long i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    long long x = a[n/2];

    for(long long i = 0; i < n; i++) {
        s += abs(a[i] - x);
    }

    cout << s;

    return 0;
}