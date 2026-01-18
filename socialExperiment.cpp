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
        int n;
        cin>>n;
        if(n<3){
            cout<<n<<endl;
            continue;
        }
        else  if(n==3){
            cout<<3<<endl;
            continue;
        }
        if(n%2==0){
            cout<<0<<endl;
            continue;
        }
        else{
            cout<<1<<endl;
            continue;
        }
    }
 
    return 0;
}
