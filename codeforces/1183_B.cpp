#include<bits/stdc++.h>

using namespace std;
int main()
{
    int q,n,k,arr[109],i,j,l,ck,m=0,arr1[500]={0},b=0;

    cin>>q;

    while(q--){
        cin>>n>>k;

        for(i=0; i<n; i++){
            cin>>arr[i];
        }
        ck=0;
        memset(arr1,0,sizeof(arr1));
        m=arr[0];
        for(i=0; i<n; i++){
            if(m>arr[i]){
                m=arr[i];
            }
        }
        b=arr[0];
        for(i=0; i<n; i++){
            if(b<arr[i]){
                b=arr[i];
            }
        }
        for(i=m; i<=100000000; i++){
            j=0;
            for(l=0; l<n; l++){
                if(abs(i-arr[l])<=k){
                    ck=1;
                }
                else{
                    ck=0;
                    break;
                }
            }
            if((i-b)>k)
                break;

            if(ck==1){
                arr1[j]=i;
            }
            else{
                arr1[j]=-1;
            }
            j++;
        }
        m=arr1[0];
        for(i=0; i<500; i++){
            if(m<arr1[i])
                m=arr1[i];
        }
        if(m==0)
            cout<<"-1"<<endl;

        else
            cout<<m<<endl;

    }
    return 0;
}
