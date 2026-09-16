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
        ll dup[n];
        for(int p=0;p<n;p++){
        scanf("%lld", &a[p]);
        dup[p]=a[p];

    }

    ll sum=0;
    ll max=-10000000000000000;
for(int x=m-1;x<n;x++)
{
    for(int q=0;q<n;q++)
    {
        a[q]=dup[q];
    }
    sum=m*dup[x];
        qsort(a,x, sizeof(long long), compare);
        for(int y=0;y<m-1;y++)
        {
            sum=sum-a[y];

        }
        if(sum>max)
        {
            max=sum;
        }
        sum=0;

}
printf("%lld\n", max);

   
    }
    
    return 0;
}