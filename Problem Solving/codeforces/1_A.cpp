#include<iostream>

using namespace std;
int main()
{
    long long int n,m,a,ans=0;

    cin>>n>>m>>a;

    ans=((m+a-1)/a)*((n+a-1)/a);

    cout<<ans<<endl;
    return 0;
}
