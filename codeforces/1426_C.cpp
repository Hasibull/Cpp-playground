#include<bits/stdc++.h>

using namespace std;

int main()
{
    int tc;

    cin>>tc;

    while(tc--){
        int n;

        cin>>n;

        int ans = 1e9;
        int value = 0;

        for(int i=1; i*i<=n; i++){
            if(n%i==0){
                value=n/i;
            }
            else{
                value = n/i+1;
            }
            ans = min(ans,value+i-2);
        }
        cout<<ans<<endl;
    }
    return 0;
}
