#include<bits/stdc++.h>

using namespace std;

int main()
{
    int tc;

    cin>>tc;

    while(tc--) {
        int n;
        cin>>n;
        string msg;
        cin>>msg;

        int ans = 0;

        for(int i=0; i<msg.size(); i++) {
            ans = max(ans, msg[i]-96);
        }

        cout<<ans<<endl;
    }

    return 0;
}