#include<stdio.h>
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
    int n,m;
    scanf("%d %d", &n,&m);
    ll a[n],b[m],ans[m];
    for(int p=0;p<n;p++){
        scanf("%lld", &a[p]);
    }
        qsort(a,n, sizeof(long long), compare);
        for(int i=0;i<m;i++)
        {
            scanf("%lld", &b[i]);
        }
        for(int i=0;i<m;i++){
        
            int low=0,high=n-1;
            ans[i]=0;
        
        while(low<=high)
        {
            int mid=(high+low)/2;
            if(a[mid]<=b[i])
            {
                ans[i]=mid+1;
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }}
        for(int s=0;s<m;s++)
        printf("%lld ", ans[s]);

    return 0;
}