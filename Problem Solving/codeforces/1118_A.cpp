#include<bits/stdc++.h>

using namespace std;
int main()
{
    long long int q,n,a,b,ans;

    cin>>q;
    while(q--){
        ans=0;
        cin>>n>>a>>b;
        if(n%2){
            if((n*a)>=((n/2)*b+a))
                ans=((n/2)*b+a);
            else
                ans=(n*a);
        }
        else{
            if((n*a)>=((n/2)*b))
                ans=((n/2)*b);
            else
                ans=(n*a);
        }
        cout<<ans<<endl;
    }
    return 0;
}
