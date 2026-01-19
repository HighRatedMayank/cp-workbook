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
        int n, m, h;
        cin >> n >> m >> h;
        vector<int> a(n);
        for(int i = 0; i < n; i++)
            cin >> a[i];
 
        vector<int> original = a;
        vector<int> history;
 
        for(int i = 0; i < m; i++){
            int b, c;
            cin >> b >> c;
            int idx = b - 1;
            
            a[idx] += c;
            history.push_back(idx);
 
            if(a[idx] > h) {
                while(!history.empty()){
                    int r = history.back();
                    history.pop_back();
                    a[r] = original[r];
                }
            }
        }
        
        for(int i = 0; i < n; i++){
            cout << a[i] << " ";
        }
        cout << endl;
    }
 
    return 0;
}
