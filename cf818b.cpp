#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,k,t;
    cin>>n>>k>>t;
    int l[n],h[n];
    int freq[2000000]={0};
    for(int p=0;p<n;p++)
    {
        cin>>l[p]>>h[p];
        for(int q=l[p];q<=h[p];q++)
        {
            freq[q]++;
        }
    }
    for(int p=0;p<200000;p++)
    {
        if(freq[p]>=k)
        {
            freq[p]=1;
        }
        else{freq[p]=0;}
    }
    int a[t],b[t];
    for(int i=0;i<t;i++)
    {
        cin>>a[i]>>b[i];
        int count=0;
        for(int j=a[i];j<=b[i];j++)
        {
            if(freq[j]==1){count++;}
        }
        cout<<count<<'\n';
    }
    return 0;
}