#include<bits/stdc++.h>

using namespace std;
int main()
{
    int t,n,i,j,h,l,arr[60],k;

    cin>>t;

    for(i=1; i<=t; i++){
            h=0;l=0;
        cin>>n;
        for(j=0; j<n; j++){
            cin>>arr[j];
        }
        for(k=0; k<(n-1); k++){
            if(arr[k]<arr[k+1]){
                h++;
            }
            if(arr[k]>arr[k+1]){
                l++;
            }
        }
        cout<<"Case "<<i<<": "<<h<<" "<<l<<endl;
    }
    return 0;
}
