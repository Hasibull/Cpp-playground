#include<bits/stdc++.h>

using namespace std;

int ps[200005],sum[200005],dif[200005];

int main()
{
    int tc,n,a,val=0;

    cin>>tc;

    while(tc--){
        cin>>n;
        memset(ps,0,sizeof(ps));
        memset(sum,0,sizeof(sum));

        for(int i=1; i<=n; i++){
            cin>>a;
            ps[a]=i;
        }
        val=0;
        for(int i=1; i<n; i++){
            dif[i]=abs(ps[i]-ps[i+1]);
        }
        for(int i=2; i<=n; i++){
            sum[i]+=(sum[i-1]+dif[i-1]);
        }
        cout<<"1";
        for(int i=2; i<=n; i++){
            val=0;
            val=(i*(i+1))/2;

            if(sum[i]<=(val-i)){
                cout<<"1";
            }
            else{
                cout<<"0";
            }
        }
        cout<<endl;
    }
    return 0;
}
