#include <stdio.h>
#define ll long long

int main() {
    long long int t;
    if (scanf("%lld", &t) != 1) return 0;
    
    for (long long int i = 0; i < t; i++) {
        ll x, n;
        scanf("%lld %lld", &n, &x);
        ll a[n]; 
        ll oc = 0, ec = 0;
        for(ll p = 0; p < n; p++) {
            scanf("%lld", &a[p]);
            if(a[p] % 2 == 0) {
                ec++;
            } else {
                oc++;
            }
        }
        if (oc == 0) 
        { printf("No\n");
        }
        else if (ec == 0 && x % 2 == 0) 
        {
        printf("No\n");
        }
        else if (n == x && oc % 2 == 0) 
        {
         printf("No\n");
        }
        else 
        {
   printf("Yes\n");
        }
    }
    
    return 0;
}