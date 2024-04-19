#include <bits/stdc++.h>

using namespace std;

int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string t;
        cin >> t;
        string s;
        for (int i = n - 1; i >= 0; i--) {
            if (t[i] != '0') {
                s += (t[i] - '1') + 'a'; 
            } else {
                
                int num = stoi(t.substr(i - 2, 2)); 
                s += (num - 1) + 'a'; 
                i -= 2; 
            }
        }
        reverse(s.begin(), s.end());
        cout << s << endl;
    }
    return 0;
}
