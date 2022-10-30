#include<bits/stdc++.h>

using namespace std;
int main()
{
    long long n,k,ans=0;

    cin>>n>>k;

    if(n%2==0){
        if(k>(n/2)){
            ans=(k-(n/2))*2;
        }
        else{
            ans=(2*k)-1;
        }
    }
    else{
        if(k>(n/2)+1){
            ans=(k-((n/2)+1))*2;
        }
        else{
            ans=(2*k)-1;
        }
    }
    cout<<ans<<endl;

    return 0;
}
