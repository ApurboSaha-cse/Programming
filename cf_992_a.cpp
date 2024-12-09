#include <bits/stdc++.h>
#include <vector>
#include <set>
using namespace std;
 
void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
 
        bool found = false;
        int chosen_index = -1;
        
        for (int i = 0; i < n; i++) {
            bool valid = true;
            for (int j = 0; j < n; j++) {
                if (i != j && abs(a[i] - a[j]) % k == 0) {
                    valid = false;
                    break;
                }
            }
            if (valid) {
                found = true;
                chosen_index = i + 1;
                break;
            }
        }
 
        if (found) {
            cout << "YES\n" << chosen_index << "\n";
        } else {
            cout << "NO\n";
        }
    }
}
 
int main() {
    solve();
    return 0;
}