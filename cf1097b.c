#include<stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int rot[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d", &rot[i]);
    }
    int tc= 1<<n;
    int count=0;
    for(int mask=0;mask<tc;mask++)
    {
        int sum=0;
        for(int i=0;i<n;i++)
        {
            if(mask & 1<<i)
            {
                sum=sum+rot[i];
            }
            else{sum=sum-rot[i];}
        }
        if(!(sum%360)){
            count++;
        }
    }
    if(count>0)
    printf("YES");
    else{printf("NO");}
    return 0;
}