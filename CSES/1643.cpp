#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    cin>>n;

    int arr[n+2];

    arr[0]=0;

    for(int i=1; i<=n; i++){
        cin>>arr[i];
    }

    int sum=0,dumSum=0;

    for(int i=0; i<=n; i++){
        int val=arr[i]+arr[i+1];

        if(val<0){
            sum=max(dumSum,sum);
            dumSum=0;
            i+=2;
        }
        else{
            dumSum+=arr[i];
        }
        cout<<dumSum<<" ";
    }

    cout<<endl;

    cout<<sum<<endl;

    return 0;
}