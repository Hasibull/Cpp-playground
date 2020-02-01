#include<bits/stdc++.h>

using namespace std;
int main()
{
    int a,b,c,t,ck,i,j,ans;

    cin>>t;

    for(i=1; i<=t; i++){
        ans=0;
        cin>>a>>b>>c;

        ans=((b+c)%a);
        if(ans==0)
            ans=a;

        cout<<"Case "<<i<<": "<<ans<<endl;
    }
    return 0;
}
