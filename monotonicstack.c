#include<stdio.h>
void find(int heights[], int num, int nexttaller[]){
    int wl[num];
    int lw=-1;
    for(int t=0;t<num;t++)
    {
        while(lw>=0 && heights[t]>heights[wl[lw]])
        {
            nexttaller[wl[lw]]=heights[t];
            lw--;
        }
        lw++;
        wl[lw]=t;
    }
    while(lw>=0){
        nexttaller[wl[lw]]=-1;
        lw--;
    }
}
int main() {
    int n;
            scanf("%d", &n);
    int a[n];
    int ans[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    find(a,n,ans);
    for(int i=0;i<n;i++)
    {
        printf("%d ", ans[i]);
    }
    return 0;
}