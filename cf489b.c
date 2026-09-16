#include<stdio.h>
#include<stdlib.h>
int compare(const void *a, const void *b) {
  int val_a = *(const int *)a;
    int val_b = *(const int *)b;

    if (val_a < val_b) return -1;
    if (val_a > val_b) return 1;
    return 0;
}
int main() {
    int n;
    scanf("%d", &n);
    int b[n];
    for(int p=0;p<n;p++)
    {
        scanf("%d", &b[p]);
    }
    int m;
    scanf("%d", &m);
    int g[m];
    for(int p=0;p<m;p++)
    {
        scanf("%d", &g[p]);
    }
    int count=0;
    if(n<=m)
    {
        qsort(b,n,sizeof(int),compare);
        qsort(g,m,sizeof(int),compare);
        for(int q=0;q<n;q++)
        {
            for(int x=0;x<m;x++)
            {
                if(abs(b[q]-g[x])<2)
                {
                    count++;
                    g[x]=-2;
                    break;
                }
            }
        }

    }
    if(m<n)
    {
        qsort(b,n,sizeof(int),compare);
        qsort(g,m,sizeof(int),compare);
        for(int q=0;q<m;q++)
        {
            for(int x=0;x<n;x++)
            {
                if(abs(g[q]-b[x])<2)
                {
                    count++;
                    b[x]=-2;
                    break;
                }
            }
        }

    }
    printf("%d", count);
    return 0;
}