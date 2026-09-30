#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n;
        cin>>n;
        int a[n];
        for(int p=0;p<n;p++)
        {
            cin>>a[p];
        }
        int ax[n];
        int ay[n];
        ax[0]=1000000;
        ay[0]=1000000;
        int countx=0;
        int county=0;
        int pen=0;
        for(int p=0;p<n;p++)
        {
            if(a[p]<=ax[countx] && a[p]<=ay[county])
            {
                if(ax[countx]<ay[county])
                {
                    countx++;
                    ax[countx]=a[p];
                }
                else{
                    county++;
                    ay[county]=a[p];
                }
            }
            else if(a[p]>=ax[countx] && a[p]<=ay[county])
            {
                county++;
                ay[county]=a[p];
            }
            else if(a[p]<=ax[countx] && a[p]>=ay[county])
            {
                countx++;
                ax[countx]=a[p];
            }
            else if(a[p]>=ax[countx] && a[p]>=ay[county])
            {
                if(ax[countx]>=ay[county])
                {
                    county++;
                    ay[county]=a[p];
                    pen++;
                }
                else{
                    countx++;
                    ax[countx]=a[p];
                    pen++;
                }
            }
        }
        cout<<pen<<'\n';
    }

    return 0;
}