#include "bits/stdc++.h"
using namespace std;

int main() {  
    int t; cin >> t;
    while(t--) {
        int n, q; cin >> n >> q;
        vector<long long> a(n), p(n);
        for(int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        sort(a.rbegin(), a.rend());
        p[0]=a[0];
        for(int i = 1; i < n; ++i) {
            p[i] = p[i-1] + a[i];
        }
    
        while(q--) {
            long long x; cin >> x;
            int l = 1, r = n, ans = -1;
            while(l <= r) {
                int mid = (l + r) / 2;
                if(p[mid - 1] >= x) {
                    ans = mid;
                    r = mid - 1;
                } else {
                    l = mid + 1;
                }
            }
            cout << ans << "\n";
            // for(auto c:p)cout<<c<<" ";
            // cout<<endl;
        }
    }
}   