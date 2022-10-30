#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int tc,a,b,c,mx=0,mn=0,md=0,m=0,n=0;

    cin>>tc;

    while(tc--){
        cin>>a>>b>>c;

        mx=max(max(a,b),c);
        mn=min(min(a,b),c);
        md=(a+b+c)-(mx+mn);
        m=mn/2;
        n=(mn-(mn/2));

        if(mx>=(md+mn)){
            cout<<(md+mn)<<endl;
        }
        else{
            cout<<((mx+mn+md)/2)<<endl;
        }

        ///cout<<min((mx-max(m,n)),(md-min(m,n)))+mn<<endl;
    }
    return 0;
}
