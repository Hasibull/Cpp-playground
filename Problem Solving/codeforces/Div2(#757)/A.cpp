#include<bits/stdc++.h>

using namespace std;

int main()
{
    int tc;

    cin>>tc;

    while(tc--){
        int n,l,r,k;

        cin>>n>>l>>r>>k;

        int arr[n+1];

        for(int i=0; i<n; i++){
            cin>>arr[i];
        }

        sort(arr,arr+n);

        long long sum=0,cnt=0;

        for(int i=0; i<n; i++){
            if(arr[i]>=l && arr[i]<=r){
                sum+=arr[i];
                if(sum<=k){
                    cnt++;
                }
            }
        }

        cout<<cnt<<endl;
    }
    return 0;
}