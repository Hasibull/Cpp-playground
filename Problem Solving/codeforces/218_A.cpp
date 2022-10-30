#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,k;

    cin>>n>>k;

    int arr[2*n+1];

    for(int i=0; i<(2*n+1); i++){
        cin>>arr[i];
    }
    int ct=0;
    for(int i=2*n; i>=0; i--){
        if(i%2==1 && ct!=k){
            if((arr[i]-1)!=0){
                arr[i]-=1;
                ct++;
            }
        }
    }
    for(int i=0; i<(2*n+1); i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}
