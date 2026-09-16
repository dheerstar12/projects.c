#include <stdio.h>
#define ll long long
#include<math.h>
int main() {
    long long int t;
    scanf("%lld", &t);
    
    for (long long int i = 0; i < t; i++)
     {
    ll n;
    scanf("%lld", &n);
    ll a[n];
    ll freq[35];
    for(int p=0;p<35;p++)
    {
        freq[p]=0;
    }    
    for(int q=0;q<n;q++)
    {
        scanf("%lld", &a[q]);
        int y=log2(a[q])/1;
        freq[y]++;
    }
    ll sum=0;
    for(int r=0;r<35;r++)
    {
        sum=sum+(freq[r]*(freq[r]-1)/2);
    }
    printf("%lld\n", sum);
    }
    
    return 0;
}