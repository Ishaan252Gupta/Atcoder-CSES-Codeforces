#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool check(int mid, const vector<int>& dp, int t) {
for (int value : dp) {
t -= (value + mid - 1) / mid;
    if (t < 0) {
        return false;
    }
}
return true;
}

int main() {
int x, t;
cin >> x >> t;
vector<int> dp(x);

for (int i = 0; i < x; i++) {
    cin >> dp[i];
}

int low = 1;
int high = *max_element(dp.begin(), dp.end());

while (low < high) {
    int mid = low + (high - low) / 2;

    if (check(mid, dp, t)) {
        high = mid;
    } else {
        low = mid + 1;
    }
}

cout << low << '\n';

return 0;

}
