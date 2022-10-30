#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long n,q,av=0,a[109],s=0;

    cin>>q;

    while(q--){
        cin>>n;
        av=0;s=0;
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        for(int i=0; i<n; i++){
            av+=a[i];
        }
        if(av%n==0)
            s=av/n;
        else
            s=(av/n)+1;

        cout<<s<<endl;
    }
    return 0;
}
