#include<bits/stdc++.h>

using namespace std;
int main()
{
    long long a,b=1,ans;

    while(1){
        cin>>a;

        ans=0;

        if(a==0)
            break;

        ans=(sqrt(8*a+1)-1)/2;

        cout<<"Case "<<b<<": "<<ans+3<<endl;
        b++;
    }
    return 0;
}
