#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i,j,k,sum[105][105],arr[105],arr1[105],n,m;

    cin>>n;

    memset(sum,0,sizeof(sum));

    for(i=0; i<n; i++){
        cin>>arr[i];
    }
    cin>>m;

    for(i=0; i<m; i++){
        cin>>arr1[i];
    }

    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            sum[i][j]=arr[i]+arr[j];
        }
    }
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            if(sum[i][j]==arr[j]){
                sum[i][j]=0;
            }
        }
    }
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            if(sum[i][j]==arr1[j]){
                sum[i][j]=0;
            }
        }
    }
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            if(sum[i][j]!=0){
                cout<<arr[i]<<" "<<arr[j]<<endl;
            }
        }
    }
    return 0;

}
