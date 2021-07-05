#include<bits/stdc++.h>

using namespace std;

int main()
{
    int tc;

    cin>>tc;

    while(tc--){
        int n;

        cin>>n;

        unsigned long long tt = pow(2,n)-1;
        unsigned long long ans = tt/12000;
        cout<<ans<<" kg"<<endl;
    }

    return 0;
}
