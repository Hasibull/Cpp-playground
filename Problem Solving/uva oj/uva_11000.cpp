#include<bits/stdc++.h>

using namespace std;
int main()
{
    long long i,j,n,ck,num,f,F,m,M,t;

    while(1){
        cin>>n;
        if(n==(-1))
            break;
        f=1;
        F=0;
        t=1;
        m=0;
        for (i=1;i<=n;i++)
        {
            m=t;
            M=f;
            f=f+F;
            t=t+f;
            F=M;
        }
        cout<<m<<" "<<t<<endl;
    }
    return 0;
}
