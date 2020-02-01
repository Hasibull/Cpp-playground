#include<bits/stdc++.h>

using namespace std;

int main()
{
    int q,a,b,n,s,ans=0;
    int ck=0,up=0;

    cin>>q;

    while(q--){
        cin>>a>>b>>n>>s;
        ck=0,up=0;
        ck=(s%n);
        if((s/n)<a){
            if(ck>b)
                cout<<"NO"<<endl;
            else
                cout<<"YES"<<endl;
        }
        else{
            up=(s-(a*n));
            if(up>b)
                cout<<"NO"<<endl;
            else
                cout<<"YES"<<endl;
        }
    }
    return 0;
}
