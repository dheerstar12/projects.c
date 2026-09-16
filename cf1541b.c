#include <stdio.h>
#define ll long long
int main() {
    long long int t;
    scanf("%lld", &t);
    
    for (long long int i = 0; i < t; i++) {
        ll n;
        ll count=0;
        scanf("%lld",&n);
        ll a[n];
        for(int p=0;p<n;p++)
        {
            scanf("%lld", &a[p]);
        }
        for(int j=0;j<n;j++)
        {int k=1;
            for(int y=a[j]-j-2;y<n;k++)
            {
                y=k*a[j]-j-2;
                if(y>0 && y>j && y<n){
                if(a[j]*a[y]==j+2+y)
                {
                    count++;
                }}
            }

        }
        printf("%lld\n", count);
    }
    
    return 0;
}