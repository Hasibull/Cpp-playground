#include<bits/stdc++.h>

using namespace std;
int main()
{
    int a,b,n,arr[100],t,i,ans=0;

    cin>>t;

    while(t--){
        b=0;ans=0;
        cin>>a;

        b=a/2;
        for(i=0; i<a; i++){
            cin>>arr[i];
        }

        sort(arr,arr+a);

        ans=(2*(arr[b]-arr[0])+2*(arr[a-1]-arr[b]));

        cout<<ans<<endl;
    }
    return 0;
}
