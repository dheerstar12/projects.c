#include <stdio.h>
#define ll long long

int main() {
    long long int t;
    scanf("%lld", &t);
    
    for (long long int i = 0; i < t; i++) {
        ll n,k;
        scanf("%lld %lld", &n,&k);
        ll a[n][n];
        ll count=1;
        for(int p=0;p<n;p++)
        {
            for(int q=0;q<n;q++)
            {
                a[p][q]=count;
                count++;
            }
        }
        count=1;
        if(k<n || k==2*n){
            printf("-1\n");
            continue;
        }
        else{
            for(int l=0;l<2*n-k;l++)
            {
                a[0][count-1]=a[l][l];
                a[l][l]=count;
                count++;
            }

        }
        for(int r=0;r<n;r++){
            for(int y=0;y<n;y++)
            {
                printf("%lld ", a[r][y]);
            }
            printf("\n");
        }
    }
    
    return 0;
}