#include<bits/stdc++.h>

using namespace std;

int main()
{
    int tc;

    cin>>tc;

    while(tc--){
        int n;

        cin>>n;

        int mx=-1,mn=1e9;

        for(int i=0; i<n; i++){
            int val;

            cin>>val;

            mx=max(val,mx);
            mn=min(val,mn);
        }

        cout<<mx-mn<<endl;
    }
    return 0;
}