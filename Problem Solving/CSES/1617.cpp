#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    
    cin>>n;

    long long ans=1;

    long int mod=1e9+7;

    for(int i=0; i<n; i++){
        ans=((ans%mod)*2)%mod;
    }

    cout<<ans<<endl;

    return 0;
}