#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        sort(v.begin(),v.end());
        for (int i = 0; i < n - 1; i++) {
            if (v[i] < 0 && v[i + 1] < 0) {
                v[i] *= -1;
                v[i + 1] *= -1;
            } else if (v[i] < 0 || v[i + 1] < 0) {
                if (v[i] < 0 && abs(v[i]) > v[i + 1]) {
                    v[i] *= -1;
                    v[i + 1] *= -1;
                } else if (v[i + 1] < 0 && abs(v[i + 1]) > v[i]) {
                    v[i] *= -1;
                    v[i + 1] *= -1;
                }
            }
        }

        long long sum = 0;
        for (int i = 0; i < n; i++) {
            // cout << v[i] << " ";
            sum += v[i];
        }
        // cout << endl;
        cout << sum << endl;
    }
    return 0;
}
