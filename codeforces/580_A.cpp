#include<bits/stdc++.h>

using namespace std;
int main()
{
    int n,i,j,k,l=0;

    cin>>n;
    int ck[n],arr[n];

    for(i=0; i<n; i++){
        cin>>arr[i];
    }

    j=0;
    for(i=0; i<n-2; i++){
        if(arr[i+2]-arr[i+1]>arr[i+1]-arr[i]){
            ck[j]++;
            l=j;
        }
        else{
            j++;
            l=j;
            ck[j]++;
        }
    }
    k=0;
    for(i=0; i<l; i++){
        if(k<ck[i]){
            k=ck[i];
        }
    }
    cout<<k<<endl;
    return 0;
}
