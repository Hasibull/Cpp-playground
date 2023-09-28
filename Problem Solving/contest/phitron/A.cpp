#include<bits/stdc++.h>

using namespace std;

int main()
{
    int tc;

    cin>>tc;

    while(tc--) {
        long long a, b;

        cin>>a>>b;

        cout<<(((a % 100) * (b % 100)) % 100)<<endl;;
    }

    return 0;
}