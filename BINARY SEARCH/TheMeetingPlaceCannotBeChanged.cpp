#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <cmath>

using namespace std;

using ld = long double;

bool check(ld mid, vector<ld> pos, vector<ld> speed) {
    ld left = -100000000;
    ld right = 100000000;

    for (int i = 0; i < pos.size(); i++) {
        ld currleft = pos[i] - (mid * speed[i]);
        ld currright = pos[i] + (mid * speed[i]);

        left = max(left, currleft);
        right = min(right, currright);

        if (left > right) {
            return false;
        }
    }

    return true;
}

int main() {
    int n;
    cin >> n;

    vector<ld> pos(n);
    vector<ld> speed(n);

    for (int i = 0; i < n; i++) {
        cin >> pos[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> speed[i];
    }

    ld low = 0;
    ld high = pow(10, 18);

    for(int i=0;i<=100;i++) {
        ld mid = low + (high - low) / 2;

        if (check(mid, pos, speed)) {
            high = mid;
        }
        else {
            low = mid;
        }
    }

    cout << fixed << setprecision(12) << high << endl;

    return 0;
}