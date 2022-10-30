#include<bits/stdc++.h>

using namespace std;

int arr[100009];

int main()
{
    int t,n,i,j,k,m,temp=0;

    cin>>t;

    while(t--){
        cin>>n;

        k=0;m=0;temp=0;
        memset(arr,0,sizeof(arr));

        for(i=0; i<n; i++){
            cin>>arr[i];
        }

        for(i=0; i<2; i++){
            for(j=i; j<n; j++){
                if(arr[i]<arr[j]){
                    temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
            }
        }
        if(arr[0]==arr[1]){
            m=arr[0];
        }
        else{
            m=arr[1];
        }
        k=n-2;
        if(k>=(m-1)){
            cout<<(m-1)<<endl;
        }
        else{
            cout<<k<<endl;
        }
    }

    return 0;
}
