#include<bits/stdc++.h>

using namespace std;

int main()
{
    int tc,a,b,ans=0;

    cin>>tc;

    while(tc--){
        cin>>a>>b;

        ans=((a/b)*b)+(b/2);
        if(ans>a){
            cout<<a<<endl;
        }
        else{
            cout<<ans<<endl;
        }
    }
    return 0;
}
