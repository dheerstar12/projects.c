#include <stdio.h>
#define ll long long

int main() {
    long long int t;
    scanf("%lld", &t);
    
    for (long long int i = 0; i < t; i++) {
        ll n;
        scanf("%lld", &n);
        ll a[n];
        for(int p=0;p<n;p++)
        {
            scanf("%lld", &a[p]);
        }
        ll b[n];
        for(int p=0;p<n;p++)
        {
            b[p]=p;
        }

        for(int p=0;p<n;p++)
        {
            for(int r=0;r<a[p];r++)
            {
                b[(p+1)*(r)]=0;
            }
        }
        for(int l=0;l<n;l++)
        {
            printf("%lld ", b[l]);
        }
        printf("\n");
    }
    
    return 0;
}