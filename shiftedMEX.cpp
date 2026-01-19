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
        int n;
        cin >> n;
        
        set<int> s;
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            s.insert(x);
        }
 
        int maxcnt = 0;
        int cnt = 0;
        int last = -2e18; 
 
        for (int x : s) {
            if (x == last + 1) {
                cnt++;
            } else {
                cnt = 1;
            }
            maxcnt = max(maxcnt, cnt);
            last = x;
        }
        
        cout << maxcnt << endl;
    }
 
    return 0;
}
