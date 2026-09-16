#include<stdio.h>
int main() {
    int n,t;
    scanf("%d %d", &n,&t);
    int a[n];
    int sum[n+1];
    sum[0]=0;
    for(int p=0;p<n;p++)
    {
        scanf("%d", &a[p]);
        sum[p+1]=sum[p]+a[p];
    }  
    int i=0;
    int j=0;
   int req=0;
    for(int i=0;i<n;i++)
    {
        while(sum[j]-sum[i]<=t && j<n+1)
        {
            if(j-i>req){req=j-i;}
            j++;
        }

    }
    printf("%d", req);
    return 0;
}