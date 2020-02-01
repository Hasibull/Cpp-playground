#include<bits/stdc++.h>

using namespace std;
int main()
{
    int a,b,c,d,m,n,ck;

    while(scanf("%d %d %d %d",&a,&b,&c,&d),a,b,c,d){
        m=abs(a-c);
        n=abs(b-d);

        if(m+n==0){
            cout<<"0"<<endl;
        }
        else if(m==n || m==0 || n==0){
            cout<<"1"<<endl;
        }
        else{
            cout<<"2"<<endl;
        }
    }
    return 0;
}
