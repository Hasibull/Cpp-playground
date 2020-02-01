#include<bits/stdc++.h>

using namespace std;

int main()
{
    int x=0,n,m,arr[100000],arr1[100000],sum[100000];
    cin>>n;

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    sum[0]=arr[0];
    for(int i=1; i<n; i++){
        sum[i]=sum[i-1]+arr[i];
    }
    cin>>m;

    for(int i=0; i<m; i++){
        cin>>arr1[i];
        x=lower_bound(sum,sum+n,arr1[i])-sum;
        cout<<x+1<<endl;
    }
    return 0;
}
