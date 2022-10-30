#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,arr[101],arr1[105];

    cin>>n>>m;

    for(int i=0; i<m; i++){
        cin>>arr[i];
    }

    for(int i=m-1; i>=0; i--){
        for(int j=arr[i]; j<=n; j++){
            arr1[j]=arr[i];
        }
    }
    for(int i=1; i<=n; i++){
        cout<<arr1[i]<<" ";
    }
    cout<<endl;

    return 0;
}
