#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

        int n,k;
        cin>>n>>k;
        int count=0;
        int dp[k+1][n+1];
        for(int q=0;q<k+1;q++)
        {
            for(int m=0;m<n+1;m++)
            {
                dp[q][m]=0;
            }
        }
        for(int p=1;p<n+1;p++)
        {
            dp[1][p]=1;
        }
        for(int l=1;l<k;l++)
        {
        for(int p=1;p<n+1;p++)
        {
            for(int q=p;q<n+1;q=q+p)
            {
                dp[l+1][q]=(dp[l+1][q]+dp[l][p])%1000000007;
            }
        }}
        int ans=0;
        for(int p=1;p<n+1;p++)
        {
            ans=(ans+dp[k][p])%1000000007;
        }
        cout<<(ans%1000000007);

    return 0;
}