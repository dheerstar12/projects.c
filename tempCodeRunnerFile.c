#include <stdio.h>
#define ll long long

int main() {
    long long int t;
    scanf("%lld", &t);
    
    for (long long int i = 0; i < t; i++) {
        int n,s;
        scanf("%d %d", &n,&s);
        int a[n];
        int count=0;
        for(int p=0;p<n;p++)
        {
            scanf("%d", &a[p]);
            if(a[p]==1)
            {
                count++;
            }
        }
        if(s>count)
        {
            printf("-1\n");
            continue;
        }
        int high=0,low=0,ans=0,max=0;
                    int j=0;
        for(int p=0;p<n;p++)
        {
            low=a[p];
            int w=0;
            while(w<s && j<n)
            {
                if(a[j]==1){w++;}
                j++;
                ans++;
            }
            if(ans>max){max=ans;}
        }
        printf("%d\n", n-max);
    }
    
    return 0;
}