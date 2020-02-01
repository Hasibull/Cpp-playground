#include<bits/stdc++.h>

using namespace std;
int main()
{
    int a,b,c,t,ck,ans;

    cin>>t;

    while(t--){
        cin>>a>>b>>c;

        int s=a+b;
        ans=0;

        while(s>=c){
            ans+=(s/c);

            s=(s%c+s/c);
        }

        cout<<ans<<endl;
    }
    return 0;
}
