#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,a,b,c;

    cin>>t;

    while(t--){
        int ck=0,av=0;
        cin>>a>>b>>c;
        ck=min(a,b);

        if(c>=ck || ck==0)
            cout<<ck<<endl;

        else{
            av=(a+b+c)/3;
            if(ck>=av)
                cout<<av<<endl;
            else
                cout<<ck<<endl;
        }
    }
    return 0;
}
