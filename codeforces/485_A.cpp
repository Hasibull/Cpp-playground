#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int a,m,ck=0,ct=0;

    cin>>a>>m;

    while(1){
        if(a%m==0){
            ck=1;
            cout<<"Yes"<<endl;
            break;
        }
        else{
            a+=(a%m);
        }

        if(ct>=m){
            break;
        }
        ct++;
    }
    if(ck==0){
        cout<<"No"<<endl;
    }
    return 0;
}
