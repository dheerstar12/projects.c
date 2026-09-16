#include <stdio.h>
#include<math.h>
#define ll long long

int main() {
    long long int t;
    scanf("%lld", &t);
    
    for (long long int i = 0; i < t; i++) {
        int n;
        scanf("%d", &n);
        int a[n];
        int bin[n][30];
        for(int p=0;p<n;p++)
        {
            scanf("%d", &a[p]);
        }
        for(int p=0;p<n;p++)
        {
            for(int k=0;k<30;k++)
            {
                bin[p][k]=((a[p] >> k) & 1);
            }}
            int ind[30];
            for(int p=0;p<30;p++)
            {
                ind[p]=0;
            }
            for(int q=0;q<n;q++)
            {
                for(int x=0;x<30;x++)
                if(bin[q][x]==1){ind[x]++;}
            }
            long long max=0;
            for(int p=0;p<n;p++)
            {
                long long current_sum=0;
                for(int z=0;z<30;z++)
                {
                    if(bin[p][z]==0)
                    {
                        current_sum= current_sum+(long long)ind[z]*(1<<z);
                    }
                    else
                    {
                        current_sum=current_sum+ (long long)(n-ind[z])*(1<<z);
                    }
                }
                if(current_sum>max){max=current_sum;}
            }
            printf("%lld\n", max);

    }
    
    return 0;
}