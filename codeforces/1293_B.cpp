#include<bits/stdc++.h>

using namespace std;

int main()
{
    double val;

    cin>>val;

    double ans=0;
    double data=val;

    for(double i=1; i<=val; i++){
        ans+=(1.0/data);
        data=val-i;
    }
    cout<<setprecision(20)<<ans<<endl;

    return 0;
}
