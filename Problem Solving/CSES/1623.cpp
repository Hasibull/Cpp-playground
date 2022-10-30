#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    cin>>n;

    long long sum1=0,sum2=0;

    int arr[n+1];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    sort(arr,arr+n);

    for(int i=n-1; i>=0; i--){
        if(sum1==sum2){
            sum1+=arr[i];
        }
        else if(sum2<sum1){
            sum2+=arr[i];
        }
        else{
            sum1+=arr[i];
        }
        cout<<sum1<<" "<<sum2<<endl;
    }

    cout<<abs(sum1-sum2)<<endl;

    return 0;
}