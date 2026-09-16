#include <stdio.h>
#define ll long long

int main() {
    long long int t;
    scanf("%lld", &t);
    
    for (long long int i = 0; i < t; i++) {
        ll n;
        scanf("%lld", &n);
        ll p[n];
        ll inc[n];
       ll count=0;

        for(int x=0;x<n;x++)
        {
            scanf("%lld", &p[x]);
            if(p[x]!=x+1)
            {
                inc[count]=p[x];
                count++;
            }
        }
        int y;
        for(y=1;y<count;y++)
        {
            if(inc[y]<inc[y-1])
            {
                continue;
            }
            else{break;}
        }
        if(y==count){
            printf("Yes");
        }
        else{printf("No");}
    }
    
    return 0;
}