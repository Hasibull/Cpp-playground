#include<bits/stdc++.h>

using namespace std;
int main()
{
    int n,arr[105],arr1[105],arr2[105],i,x=0,y=0,z=0;

    cin>>n;

    for(i=0; i<n; i++){
        cin>>arr[i]>>arr1[i]>>arr2[i];
    }
    for(i=0; i<n; i++){
        x+=arr[i];
        y+=arr1[i];
        z+=arr2[i];
    }
    if(x==0 && y==0 && z==0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

    return 0;
}
