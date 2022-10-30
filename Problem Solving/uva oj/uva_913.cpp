#include<bits/stdc++.h>

using namespace std;
int main()
{
    long long a,sum,n;

    while(scanf("%lld",&n)==1){
            a=0;sum=0;
        a=(n*(n+2))/2;

        sum=(3*a)-6;

        cout<<sum<<endl;
    }
    return 0;
}
