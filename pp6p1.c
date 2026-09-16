#include<stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    
    int l[n], sum[n];
    for(int i=0;i<n-1;i++)
    {
        scanf("%d", &l[i]);
        if(i>0)
            sum[i]=sum[i-1]+l[i];
        else{
            sum[i]=l[i];
        }
    }
    int d, max=0, ind=-1; 
    if (n>1) {
        max=l[0]; 
    }
    scanf("%d", &d);
    
    int p;
    for(p=0;p<n-1;p++)
    {
        if(l[p]>max){
            max=l[p];
        }
        if(sum[p]>d)
        {
            ind=p;
            break;
        }
    }
    while(p<n-1 && sum[p]-max<d)
    {
        ind=p;
        p++;
    }
    
    printf("%d\n", ind+2 );
    return 0;
}