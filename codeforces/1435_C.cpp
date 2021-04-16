#include<bits/stdc++.h>

using namespace std;

int main()
{
    int mx=0, mn=INT_MAX;

    for(int i=0; i<6; i++){
        int val;

        cin>>val;

        if(mx<val){
            mx=val;
        }
        if(mn>val){
            mn = val;
        }
    }

    int n, nmx=0, nmn=INT_MAX;

    cin>>n;

    for(int i=0; i<n; i++){
        int val;

        cin>>val;

        if(nmx<val){
            nmx=val;
        }
        if(nmn>val){
            nmn=val;
        }
    }

    cout<<abs((nmn-mn)-(nmx-mx))<<endl;

    return 0;
}
