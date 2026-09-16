#include <stdio.h>
#include<stdlib.h>
#define ll long long
int compare(const void *a, const void *b) {
    long long val_a = *(const long long *)a;
    long long val_b = *(const long long *)b;

    if (val_a < val_b) return -1;
    if (val_a > val_b) return 1;
    return 0;
}
int main() {
    long long int t;
    scanf("%lld", &t);
    
    for (long long int i = 0; i < t; i++) {
        ll n,m;
        scanf("%lld %lld", &n,&m);
        ll a[n];
        ll rem[m-1];
        ll sum=0;
        ll val=-1000000000;
        ll max=val;
        for(int p=0;p<n;p++)
        {
            scanf("%lld", &a[p]);
            if(p<m-1)
            {
                rem[p]=a[p];
                ll sum=sum-rem[p];
                if(max<a[p]){
                    max=a[p];
                }
            }
            else{
                        if(a[p]<max)
                        {
                            sum=sum+max-a[p];
                            rem[m-2]=a[p];
                        }
                        max=-100000000;
                        for(int y=0;y<m-1;m++)
                        {
                            if(a[y]>max)
                            {
                                a[y]=max;
                            }
                        }
            }
            if(p*a[p]+sum>val)
            {
                val=p*a[p]+sum;
            }
        }
        printf("%lld\n", val);
    }
    
    return 0;
}