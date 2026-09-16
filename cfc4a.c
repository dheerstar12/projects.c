#include <stdio.h>
#define ll long long

int main() {
    long long int t;
    scanf("%lld", &t);
    
    for (long long int i = 0; i < t; i++) {
        ll n;
        scanf("%lld", &n);
        ll oc=0,zc=0;
        ll a[n];
        for(int p=0;p<n;p++)
        {scanf("%lld", &a[p]);
            if(a[i]==1)
            {
                oc++;
            }
            else{zc++;}
        }
        if(zc>oc){
            printf("Elsie\n");
        }
        else{
            printf("Bessie\n");
        }
    }
    
    return 0;
}