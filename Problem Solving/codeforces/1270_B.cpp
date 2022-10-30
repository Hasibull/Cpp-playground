#include<bits/stdc++.h>

using namespace std;

int main()
{
    int tc,n,val=0,mx=0,mn=0,dif=0;

    cin>>tc;

    while(tc--){
        cin>>n;
        int ck=0;
        cin>>val;
        mn=val;
        for(int i=2; i<=n; i++){
            cin>>val;
            if(abs(mn-val)>=2 && ck==0){
                cout<<"YES"<<endl;
                cout<<i-1<<" "<<i<<endl;
                ck=1;
            }
            mn=val;
        }
        if(ck==0)
            cout<<"NO"<<endl;
    }
    return 0;
}
