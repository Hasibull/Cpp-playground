#include<bits/stdc++.h>

using namespace std;

int main()
{
    int tc;

    cin>>tc;

    while(tc--){
        int n;

        cin>>n;

        int ml=1e9, cl=1e9;
        int mr=0, cr=1e9;
        int mlen=0, clen=1e9;

        while(n--){
            int l,r,c;

            cin>>l>>r>>c;

            if(ml>l){
                ml=l;
                cl=c;
            }
            else if(ml==l){
                cl=min(cl,c);
            }
            if(mr<r){
                mr=r;
                cr=c;
            }
            else if(mr==r){
                cr=min(cr,c);
            }
            if(mlen<r-l+1){
                mlen=r-l+1;
                clen=c;
            }
            else if(mlen==r-l+1){
                clen=min(clen,c);
            }

            int ans=cl+cr;

            if(mlen==mr-ml+1){
                ans=min(ans,clen);
            }
            cout<<ans<<endl;
        }
    }

    return 0;
}