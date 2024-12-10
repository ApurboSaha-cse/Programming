/* "ওঁ নমঃ  িশবায়."
The code is powered by Apurbo Saha */ 

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;
    string s;
    int count = 0;
    int ans = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> s;
        count += s.length();
        if(count <= m)
        ans ++;
    }

    cout << ans << "\n";

}

int main()
{
    int test = 1;
    cin >> test;
    for (int t = 1; t <= test; t++)
    {
        solve();
    }
    return 0;
}