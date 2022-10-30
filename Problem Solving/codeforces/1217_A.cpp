#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,s,i,e,ans;

    cin>>t;

    for(int j=1; j<=t; j++){
        cin>>s>>i>>e;

        ans=0;

        int ck=0;

        ck=max(0,((e+i-s+2)/2));

        ans=max(0,(e-ck+1));

        cout<<ans<<endl;
    }
    return 0;
}
