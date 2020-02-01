#include<iostream>

using namespace std;
int main()
{
    int a,b,n;

    cin>>n;
    int arr[n],i,j;

    for(i=0; i<n; i++){
        cin>>arr[i];
    }

    for(i=0; i<(n-1); i++){
        for(j=(i+1); j<n; j++){
            if(arr[i]>=arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(i=(n-2); i>=0; i--){
        if(arr[n-1]==arr[n-2]){
            a=arr[n-1]; b=arr[n-2];
            break;
        }
        else if(arr[n-1]%arr[i]!=0){
            a=arr[n-1]; b=arr[i];
            break;
        }
    }
    cout<<a<<" "<<b<<endl;
}
