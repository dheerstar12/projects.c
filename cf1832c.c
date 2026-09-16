#include <stdio.h>
#define ll long long

int main() {
    long long int t;
    scanf("%lld", &t);
    
    for (long long int i = 0; i < t; i++) {
        ll n;
        scanf("%lld", &n);
        ll b[n];
        ll a[n];
        ll count=0;
        ll val=1;
                for(int p=0;p<n;p++)
        {
            scanf("%lld", &b[p]);
        }
        a[0]=b[0];
        for(int x=1;x<n;x++){
            if(b[x]==b[x-1]){
                continue;

            }
            else{
                a[val]=b[x];
                val++;
            }
        }
        for(int y=1;y<val-1;y++)
        {
            if(a[y]>=a[y-1] && a[y]<=a[y+1]){
                count++;
            }
            else if(a[y]>=a[y+1] && a[y]<=a[y-1])
            {
                count++;
            }
        }
        if(count==val-2 && a[0]==a[val-1]){
            printf("1\n");
            continue;
        }
            printf("%lld\n", val-count);
    }

    return 0;
}