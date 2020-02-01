#include<bits/stdc++.h>

using namespace std;

long long sum[1000000],arr[100009];

int main()
{
    long int n,k,data=0;

    cin>>n>>k;

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<=(n-k); i++){
        for(int j=i; j<(i+k); j++){
            sum[i]=sum[i]+arr[j];
        }
    }
    long long mn=sum[0],ps=0;

    for(int i=1; i<=(n-k); i++){
        if(mn>sum[i]){
            mn=sum[i];
            ps=i;
        }
    }
    cout<<ps+1<<endl;

    return 0;
}
