#include<bits/stdc++.h>

using namespace std;

int main()
{
    long int a,n,ck=0,arr[105];

    cin>>n;

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);

    for(int i=1; i<n; i++){
        ck+=(arr[i]-arr[0])%2;
    }
    if(ck>n-ck){
        cout<<n-ck<<endl;
    }
    else
        cout<<ck<<endl;

    return 0;
}
