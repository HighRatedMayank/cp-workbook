#include <bits/stdc++.h>
using namespace std;
 
// ---------- Macros ----------
#define int long long
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define all(x) (x).begin(), (x).end()
#define endl '\n'
 
// ---------- Main Function ----------
int32_t main() {
    fast_io;
 
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
 
        if (n < k) {
            cout << -1 << endl;
            continue;
        }
 
        int ans = -1;
 
        for (int i = 0; i < 62; i++) {
            int div = (1LL << i);
 
            if (div > n) break;
 
            int a = n / div;
            int b = (n + div - 1) / div;
 
            if (a == k || b == k) {
                ans = i;
                break;
            }
 
            if (b < k) {
                break;
            }
        }
        cout << ans << endl;
    }
 
    return 0;
}
