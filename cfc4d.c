#include <stdio.h>
#define ll long long

int main() {
    long long int t;
    scanf("%lld", &t);
    
    for (long long int i = 0; i < t; i++) {
        ll n;
        scanf("%lld", &n);
        ll a[n];
        ll b[n];
        for(int p=0;p<n;p++)
        {
            scanf("%lld", &a[p]);
        }
        for(int p=0;p<n;p++)
        {
            scanf("%lld", &b[p]);
        }
       int active[n];
       for(int p=0;p<n;p++)
       {
           active[p]=1; 
       }
       for(int y=0;y<n;y++){
           ll forf=0;
           ll temp[n];
           for(int p=0;p<n;p++)
           {
               temp[p]=a[p]; 
           }
           ll champ=-1;
           for(int p=0;p<n;p++)
           {
               if(active[p]==1) {
                   champ=p;
                   break;
               }
           }
               for(int p=champ;p<n;p=champ)
               {
                int flag = 0;
                for(int q=champ+1;q<n;q++)
                {
                    if(active[q]==0){continue;}
                    
                    if(temp[p]>=temp[q])
                    {
                        temp[p]=temp[p]+temp[q];
                    }
                    else{
                        forf++;
                        champ=q;
                        flag = 1;
                        break;
                    }
                }
                if(flag==0) break;
               }
           printf("%lld ", forf);
           active[b[y]-1]=0;
       }
       printf("\n");
    }   
    return 0;
}