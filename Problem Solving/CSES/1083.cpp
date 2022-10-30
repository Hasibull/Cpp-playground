#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    cin>>n;

    /**
    long long sum=0,rsum=(n*(n+1))/2;

    for(int i=0; i<n-1; i++){
        int val;

        cin>>val;

        sum+=val;
    }

    cout<<rsum-sum<<endl;
    */

    int arr[n+2];

    memset(arr,0,sizeof(arr));

    for(int i=0; i<n-1; i++){
        int val;

        cin>>val;

        arr[val]=1;
    }

    for(int i=1; i<=n; i++){
        if(arr[i]==0){
            cout<<i<<endl;
        }
    }

    return 0;
}
