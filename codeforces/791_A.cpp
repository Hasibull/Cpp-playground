#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,ck=0;

    cin>>a>>b;

    while(a<b){
        a*=3;
        b*=2;
        ck++;
    }
    if(a==b){
        ck++;
    }
    cout<<ck<<endl;
    return 0;
}
