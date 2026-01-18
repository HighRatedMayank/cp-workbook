#include <bits/stdc++.h>
using namespace std;
 
#define int long long
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define endl '\n'
 
int32_t main() {
    fast_io;
 
    int t;
    cin >> t;
    while (t--) {
        int s, k, m;
        cin >> s >> k >> m;
 
        int n = m / k;
        int rem = m % k;
        
        int startSand = 0;
 
        if (s <= k) {
            startSand = s;
        } else {
            if (n % 2 == 0) {
                startSand = s;
            } else {
                startSand = k;
            }
        }
 
        int ans = max(0LL, startSand - rem);
        cout << ans << endl;
    }
 
    return 0;
}
