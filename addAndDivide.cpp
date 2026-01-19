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
        int a,b;
        cin>>a>>b;

        if(a<b)
        cout<<1<<endl;
        else if(a==b)
        cout<<2<<endl;
        else{
            int mini=INT_MAX;
            
            for(int i=0;i<=31; i++){
                int d=a;
                int c=b+i;
                if(c==1)
                continue;
                int op1=i;
                int op2=0;
                while(d>0){
                    d=d/c;
                    op2++;
                }
                mini=min(mini, op1+op2);
            }
            cout<<mini<<endl;
        }
    }
    

    return 0;
}
