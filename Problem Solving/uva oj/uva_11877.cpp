#include<bits/stdc++.h>

using namespace std;
int main()
{
    int a,b,c;

    while(1){
        cin>>a;
        if(a==0)
            break;
        b=0;
        while(a>=3){
            b+=a/3;
            a=(a%3+a/3);
        }
        if(a==2)
            b+=1;
        cout<<b<<endl;
    }
    return 0;
}
