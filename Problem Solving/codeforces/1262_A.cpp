#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a[100005],b[100005],dis[100005],n,tc;

    cin>>tc;

    while(tc--){
        cin>>n;

        memset(a,0,sizeof(a));
        memset(dis,0,sizeof(dis));

        for(int i=0; i<n; i++){
            cin>>a[i]>>b[i];
        }
        sort(a,a+n);
        int j=0;
        for(int i=1; i<n; i++){
            if((a[i]-a[i-1])>1){
                dis[j]=(a[i]-a[i-1]);
                j++;
            }
        }
        int m=dis[0];

        for(int i=0; i<j; i++){
            if(m>dis[i]){
                m=dis[i];
            }
        }
        cout<<m<<endl;
    }
    return 0;
}
