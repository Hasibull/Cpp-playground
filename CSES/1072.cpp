#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    cin>>n;

    for(int i=1; i<=n; i++){
        long long ans=((pow(i,2)*(pow(i,2)-1))/2)-(4*(i-1)*(i-2));
        cout<<ans<<endl;
    }
    return 0;
}