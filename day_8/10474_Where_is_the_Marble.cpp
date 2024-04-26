#include <bits/stdc++.h>

using namespace std;

int main() {
    int y = 1;
    while (true) {
        int n, k;
        cin >> n >> k;
        if (n == 0 && k == 0) break;

        cout << "CASE# " << y << ":" << endl;
        y++;

        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        sort(v.begin(), v.end());
        for (int i = 0; i < k; i++) {
            int x;
            cin >> x;
            auto f = lower_bound(v.begin(), v.end(), x);
            int d = f - v.begin();
            if (d < n && v[d] == x)
                cout << x << " found at " << d + 1 << endl;
            else
                cout << x << " not found" << endl;
        }
    }

    return 0;
}
