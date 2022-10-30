#include<bits/stdc++.h>

using namespace std;

int main()
{
    int tc;

    cin>>tc;

    while(tc--){
        long long y,x,ans=0;

        cin>>y>>x;

        if(y>x){
            if(y%2==0){
                ans=(y*y)-(x-1);
            }
            else {
                ans=((y*y)-((2*y-1)-1))+(x-1);
            }
            cout<<ans<<endl;
        }
        else{
            if(x%2==0){
                ans=((x*x)-((2*x-1)-1))+(y-1);
            }
            else {
                ans=(x*x)-(y-1);
            }
            cout<<ans<<endl;
        }
    }

    return 0;
}
