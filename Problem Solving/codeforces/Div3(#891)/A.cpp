#include<bits/stdc++.h>

using namespace std;

int main()
{
    int tc;

    cin>>tc;

    while(tc--) {
        int n;
        long long sum = 0;
        cin>>n;

        for(int i=0; i<n; i++) {
            int val;
            cin>>val;

            sum += val;
        }

        if(sum % 2 == 0) {
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }

    return 0;
}