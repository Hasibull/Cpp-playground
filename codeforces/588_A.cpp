#include<bits/stdc++.h>

using namespace std;

int main()
{
    long int n;

    cin>>n;

    long int a[n+1],p[n+1];

    for(int i=0; i<n; i++){
        cin>>a[i]>>p[i];
    }
    int mn=p[0];
    long int ans=0;

    for(int i=0; i<n; i++){
        if(mn>p[i]){
            ans+=(a[i]*p[i]);
            mn=p[i];
        }
        else{
            ans+=(a[i]*mn);
        }
    }
    cout<<ans<<endl;

    return 0;
}
