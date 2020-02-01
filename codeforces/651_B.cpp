#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,arr[1009],ck[1001],i,j,k;

    cin>>n;
    memset(ck,0,sizeof(ck));
    for(i=0; i<n; i++){
        cin>>arr[i];
        ck[arr[i]]++;
    }
    for(i=1; i<=1000; i++){
        if(ck[i]>0){
            for(j=1; j<=ck[i]; j++){
                cout<<i<<" ";
            }
        }
    }
    return 0;
}
