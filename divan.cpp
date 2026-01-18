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
        vector<pair<int, int>> building(n);
        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;
            building[i] = {a, i + 1};
        }
 
        sort(building.rbegin(), building.rend());
 
        vector<int> ans(n + 1);
        ans[0] = 0;
        int total_time = 0;
        int pos = 1;
 
        for (int i = 0; i < n; i++) {
            int freq = building[i].first;
            int idx = building[i].second;
 
            if (i % 2 == 0) {
                ans[idx] = pos;
                total_time += 2 * pos * freq;
            } else {
                ans[idx] = -pos;
                total_time += 2 * pos * freq;
                pos++;
            }
        }
 
        cout << total_time << endl;
        for (int i = 0; i <= n; i++) {
            cout << ans[i] << (i == n ? "" : " ");
        }
        cout << endl;
    }
 
    return 0;
}
