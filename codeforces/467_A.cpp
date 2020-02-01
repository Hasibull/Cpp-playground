#include<iostream>

using namespace std;
int main()
{
    int n,p,q,i,j,ans=0;

    cin>>n;
    while(n--){
        cin>>p>>q;
        if(q-p>=2)
            ans++;
    }

    cout<<ans<<endl;
    return 0;
}
