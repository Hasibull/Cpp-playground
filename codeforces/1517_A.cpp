#include<bits/stdc++.h>

using namespace std;

int main()
{
    int tc;

    cin>>tc;

    while(tc--){
        long long n;

        cin>>n;

        if(n%2050!=0 || n<2050){
            cout<<"-1"<<endl;
        }
        else {
            long long div = n/2050;

            int ans = 0;

            while(div!=0){
                ans += (div%10);
                div/=10;
            }

            cout<<ans<<endl;
        }
    }
    return 0;
}
