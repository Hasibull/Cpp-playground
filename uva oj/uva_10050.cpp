#include<bits/stdc++.h>

using namespace std;
int main()
{
    int t,p,n,ck[3659],arr[3659],i,j,m;

    cin>>t;

    while(t--){
        cin>>n>>p;

        memset(ck,0,sizeof(ck));
        memset(arr,0,sizeof(arr));

        for(i=0; i<p; i++){
            cin>>arr[i];
        }
        j=0;m=0;
        for(i=0; i<p; i++){
            for(j=arr[i]; j<=n; j+=arr[i]){
                ck[j]=1;
            }
        }
        for(i=1; i<=n; i++){
            if(i%7!=0 && i%7!=6){
                m+=ck[i];
            }
        }
        cout<<m<<endl;
    }
    return 0;
}
