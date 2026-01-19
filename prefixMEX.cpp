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
    cin>>t;
    while(t--){
        int  n;
        cin>>n;
        vector<int> a(n);
        for(int i=0; i <n; i++)
        cin>>a[i];
 
        int maxi=-1;
        for(int i: a){
            maxi=max(maxi, i);
        }
        cout<<maxi*n<<endl;
    }
    
 
    return 0;
}
