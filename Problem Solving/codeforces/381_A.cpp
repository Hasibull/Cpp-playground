#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,i=0,arr[1005],suma=0,sumb=0,ct=0,sz=0;

    cin>>n;

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    i=0;
    sz=n;
    ct=0;
    while(ct<sz){
        if(ct%2==0){
            if(arr[i]<arr[n-1]){
                suma+=arr[n-1];
                n-=1;
            }
            else{
                suma+=arr[i];
                i+=1;
            }
        }
        else{
            if(arr[i]<arr[n-1]){
                sumb+=arr[n-1];
                n-=1;
            }
            else{
                sumb+=arr[i];
                i+=1;
            }
        }
        ct++;
    }
    cout<<suma<<" "<<sumb<<endl;

    return 0;
}
