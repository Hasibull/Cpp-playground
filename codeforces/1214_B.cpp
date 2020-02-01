#include<bits/stdc++.h>

using namespace std;

int main()
{
    int b,g,n,ck=0,ap=0,ap1=0;

    cin>>b>>g>>n;
    for(int i=0; i<n+1; i++){
        ap=i;
        ap1=n-i;

        if(ap<=b && ap1<=g)
            ck++;
    }
    cout<<ck<<endl;

    return 0;
}
