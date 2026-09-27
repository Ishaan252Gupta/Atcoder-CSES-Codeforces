#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool check(vector<long long>& a, long long mid, int k) {
    int parts = 1;
    long long sum = 0;

    for (long long x : a) {
        if (sum + x <= mid) {
            sum += x;
        }
        else {
            parts++;
            sum = x;
        }
    }

    return parts <= k;
}

int main() {
    int n, k;
    cin >> n >> k;

    vector<long long> a(n);

    long long low = 0;
    long long high = 0;

    for (int i = 0; i < n; i++) {
        cin >> a[i];

        low = max(low, a[i]);
        high += a[i];
    }

    while (low < high) {
        long long mid = low + (high - low) / 2;

        if (check(a, mid, k)) {
            high = mid;
        }
        else {
            low = mid + 1;
        }
    }

    cout << low << endl;
}