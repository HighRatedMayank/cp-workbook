#include <bits/stdc++.h>
using namespace std;

// ---------- Macros ----------
#define int long long
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define all(x) (x).begin(), (x).end()
#define endl '\n'

int lcs(string& a, string& b, int n1, int n2, vector<vector<int>>& dp){
    if(n1==0  || n2==0)
    return  0;

    if (dp[n1][n2] != -1) 
        return dp[n1][n2];

    if(a[n1-1]==b[n2-1]){
        return dp[n1][n2]= 1+lcs(a,b, n1-1, n2-1,  dp);
    }
    else{
        return dp[n1][n2]=0;
    }
}

// ---------- Main Function ----------
int32_t main() {
    fast_io;

    int t;
    cin>>t;
    
    while(t--){
        string a;
        cin>>a;
        string b;
        cin>>b;

        int n1=a.size();
        int n2=b.size();
        vector<vector<int>> dp(n1+1, vector<int>(n2+1, -1));
        int maxi=0;
        for(int i=n1; i>=0;i--){
            for(int j=n2; j>=0; j--){
                int len=lcs(a,b, i,j,dp);
                if(len>maxi)
                maxi=len;
            }
        }

        cout<<(n1+n2)-2*maxi<<endl;
    }
    

    return 0;
}
