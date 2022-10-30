#include<bits/stdc++.h>
using namespace std;
int F(int a){
    if(a%10>0)
        return a%10;
    else if(a==0)
        return 0;
    else
        return F(a/10);
}
int main()
{
    long int i,p,q,sum=0;

    while(scanf("%ld %ld",&p,&q)==2){
        sum=0;
        if(p==-1 && q==-1)
            break;

        for(i=p; i<=q; i++){
            sum+=F(i);
        }
        cout<<sum<<endl;
    }
    return 0;
}
