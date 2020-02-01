#include<bits/stdc++.h>

using namespace std;

int main()
{
    int tc,n,x,a,b;

    cin>>tc;

    while(tc--){
        cin>>n>>x>>a>>b;

        if((abs(a-b)+x)>=n){
            cout<<n-1<<endl;
        }
        else{
            cout<<abs(a-b)+x<<endl;
        }
    }
    return 0;
}
