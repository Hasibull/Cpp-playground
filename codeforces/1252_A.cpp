#include<bits/stdc++.h>

using namespace std;

int arr[1000000];
int main()
{
    int temp,n;

    cin>>n;

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    for(int i=0; i<(n-1); i++){
        if(arr[i]>arr[i+1]){
            temp=arr[i+1];
            arr[i+1]=arr[i];
            arr[i]=temp;
        }
        else{
            temp=arr[i+1];
            arr[i+1]=arr[i];
            arr[i]=temp;
        }
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}
