#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n;
        cin>>n;
        char s[n];
        int ast[n];
        int count=0;
        for(int p=0;p<n;p++)
        {
            cin>>s[p];
            if(s[p]=='*')
            {
                ast[count]=p;
                count++;
            }
        }
        if(count==0) 
        {
            cout<<0<<'\n';
            continue;
        }
        
        int star=ast[count/2];
        ll ans=0; 
        for(int p=0;p<count;p++)
        {
            ans=ans+abs(ast[p]-star)-abs(p - count/2);
        }
        cout<<ans<<'\n';
    }

    return 0;
}