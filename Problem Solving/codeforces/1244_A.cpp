#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,c,d,e=0,f=0,k,q;

    cin>>q;

    while(q--){
        cin>>a>>b>>c>>d>>k;

        if(a%c==0){
            e=a/c;
        }
        else{
            e=(a/c)+1;
        }
        if(b%d==0){
            f=b/d;
        }
        else{
            f=(b/d)+1;
        }
        if((e+f)>k){
            cout<<"-1"<<endl;
        }
        else{
            cout<<e<<" "<<f<<endl;
        }
    }
    return 0;
}
