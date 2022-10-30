#include<bits/stdc++.h>

using namespace std;

int main()
{
    int tc;

    cin>>tc;

    while(tc--){
        int n,m,rb,cb,rd,cd;

        cin>>n>>m>>rb>>cb>>rd>>cd;

        int ans=500;

        if(cb>cd){
            ans=min(ans,(m-cd)+(m-cb));
        }
        else{
            ans=min(ans,(cd-cb));
        }
        if(rb>rd){
            ans=min(ans,(n-rd)+(n-rb));
        }
        else{
            ans=min(ans,(rd-rb));
        }
        cout<<ans<<endl;
    }

    return 0;
}
