#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin>>n>>m;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
        a[i]%=m;
    }
    vector<vector<long long>> dp(m, vector<long long>(2, 0));
    dp[0][0]=1;
    for(int i=0; i<n; i++){
        vector<vector<long long>> new_dp=dp;
        for(int r=0; r<m; r++){
            for(int p=0; p<2; p++){
                int nr=(r+a[i])%m;
                int np=p^1;
                new_dp[nr][np] += dp[r][p];
            }
        }
        dp.swap(new_dp);
    }
    cout<<dp[0][0]-1<<endl;
    return 0;
}
