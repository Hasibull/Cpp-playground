#include<bits/stdc++.h>

using namespace std;
int main()
{
    unsigned long long a=0,b,c,d;

    while(1){
        cin>>a;

        if(a==0){
            break;
        }
        b=0;c=0;d=0;

        b=(a*10)/9;

        c=b-1;

        d=c-(c/10);

        if(d==a){
            cout<<c<<" "<<b<<endl;
        }
        else{
            cout<<b<<endl;
        }
    }
    return 0;
}
