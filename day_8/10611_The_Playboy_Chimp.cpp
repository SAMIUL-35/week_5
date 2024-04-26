#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    int q;
    cin >> q;
    while (q--) {
        int x;
        cin >> x;
        auto lower = lower_bound(v.begin(), v.end(), x); 
        auto upper = upper_bound(v.begin(), v.end(), x); 
        if (lower == v.begin()) { 
            cout << "X ";
        } else {
            cout << *(lower - 1) << " "; 
        }
        if (upper == v.end()) { 
            cout << "X" << endl;
        } else {
            cout << *upper << endl; 
        }
    }
    return 0;
}
