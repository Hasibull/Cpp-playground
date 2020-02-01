#include<bits/stdc++.h>

using namespace std;
int main()
{
    long int a,ans;

    while(1){
        cin>>a;

        if(a==0)
            break;

        ans=0;

        for(int i=1; i<=a; i++){
            ans+=(i*i);
        }

        cout<<ans<<endl;
    }

    return 0;
}
