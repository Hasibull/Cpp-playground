#include<bits/stdc++.h>

using namespace std;
int main()
{
    int t,i,a[15],p,ans,j;

    cin>>t;

    for(i=1; i<=t; i++){
        cin>>p;
        for(j=0; j<p; j++){
            cin>>a[j];
        }
        if(p%2)
            cout<<"Case "<<i<<": "<<a[p/2]<<endl;
        else
            cout<<"Case "<<i<<": "<<a[p/2-1]<<endl;
    }
    return 0;
}
