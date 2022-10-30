#include<bits/stdc++.h>

using namespace std;
int main()
{
    int t,arr[100000],i,j,k,a;

    cin>>t;
    for(i=1; i<=t; i++){
        k=0;
        cin>>a;
        for(j=0; j<a; j++){
            cin>>arr[j];
        }
        for(j=0; j<a; j++){
            if(k<arr[j]){
                k=arr[j];
            }
        }
        cout<<"Case "<<i<<": "<<k<<endl;
    }
    return 0;
}
