#include <bits/stdc++.h>
#include <vector>
#include <set>
using namespace std;

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n ;
        cin >> n;

        int cnt = 1;
        int temp = 1;
        while(temp < n){
            temp = (temp +1) * 2;
            cnt ++;
        }

        cout << cnt << "\n";


    }
}

int main() {
    solve();
    return 0;
}
