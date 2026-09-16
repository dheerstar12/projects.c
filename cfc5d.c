#include <stdio.h>
#define ll long long

int main() {
    long long int t;
    scanf("%lld", &t);
    
    for (long long int i = 0; i < t; i++) {
        int n;
        scanf("%d", &n);
        if(n==1){
            printf("1\n");
            continue;
        }
        if(n==2){
            printf("11\n");
            continue;
        }
        
        int q=(n-2)/3;
        if(q%2==0){
            q++;
        }
        int w=n-2-q;
        
        for(int j=0;j<w/2;j++){
        printf("0");}
    printf("1");
for(int j=0;j<q;j++ )
{
    printf("0");
}
printf("1");
        for(int j=0;j<w-w/2;j++){
        printf("0");}
    printf("\n");
    }
    
    return 0;
}