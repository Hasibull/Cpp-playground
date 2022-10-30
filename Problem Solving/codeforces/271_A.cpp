#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,a=0,b=0,c=0,d=0,y=0;

    cin>>n;

    for(int i=n+1; i<=90000; i++){
        y=i;
        a=y%10;
        y/=10;
        b=y%10;
        y/=10;
        c=y%10;
        y/=10;
        d=y%10;
        y/=10;

        if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d){
            cout<<i<<endl;
            break;
        }
    }
    return 0;
}
