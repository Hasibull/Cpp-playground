#include<bits/stdc++.h>

using namespace std;
int main()
{
    int n,p,q,arr[40]={0},t,i,j,sum=0,k,ck=0;

    cin>>t;

    for(i=1; i<=t; i++){
        cin>>n>>p>>q;

        memset(arr,0,sizeof(arr));

        for(j=0; j<n; j++){
            cin>>arr[j];
        }
        ck=0;sum=0;k=0;
        if(n<=p){
            k=n;
        }
        else{
            k=p;
        }
        for(j=0; j<k; j++){
            sum+=arr[j];
            if(sum>q)
                break;

            else
                ck++;
        }
        cout<<"Case "<<i<<": "<<ck<<endl;
    }
    return 0;
}
