#include<bits/stdc++.h>

using namespace std;
int main()
{
    int t,n,arr[25],i,j,ck,a,b;

    cin>>t;

    for(i=1; i<=t; i++){
        cin>>n;

        for(j=0; j<n; j++){
            cin>>arr[j];
        }
        a=0;b=0;
        cout<<"Case "<<i<<": ";
        for(j=0; j<n; j++){
            a+=(arr[j]/30)*10+10;
            b+=(arr[j]/60)*15+15;
        }
        if(a<b)
            cout<<"Mile "<<a<<endl;
        else if(a>b)
            cout<<"Juice "<<b<<endl;
        else if(a==b)
            cout<<"Mile Juice "<<a<<endl;
    }
    return 0;
}
