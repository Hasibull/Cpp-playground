#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cstring>
#include<math.h>

using namespace std;
int main()
{
    long long a=0,ck=0,n;

    while(1){
        cin>>n;

        ck=0;a=0;

        if(n==0)
            break;

        a=sqrt(n);

        ck=a*a;

        if(ck==n)
            cout<<"yes"<<endl;

        else
            cout<<"no"<<endl;

    }

    return 0;
}
