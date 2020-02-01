#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,arr[105],ck=0,i,j;

    cin>>n;

    for(i=0; i<n; i++){
        cin>>arr[i];
    }
    for(i=0; i<n; i++){
        if(arr[i-1]==1 && arr[i]==0){
            j=0;
        }
        else{
            ck++;
        }
    }
    cout<<ck<<endl;

    return 0;
}
