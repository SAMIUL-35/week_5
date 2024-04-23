#include <bits/stdc++.h>

using namespace std;

int main ()

{
  int t;
    cin >> t;
    while (t--) {
        string a, b;
        cin >> a >> b;
        int n = a.length();
        int m = b.length();
        int ans = 0;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                int x = i, y = j;
                int len = 0; 
                while (x < m && y < n && a[y] == b[x]) {
                    len++;
                    x++;
                    y++;
                }
                ans = max(ans, len); 
            }
        }
        cout << n + m - 2 * ans << endl; 
    }
    return 0;
}



