#include<bits/stdc++.h>

using namespace std;
int main()
{
    long long s,i,j,a,b,d,ck,n;
    cin >> n;
    for(i=1; i<=n; i++)
    {
        s=0;d=0;
        cin >> a >> b;
        s=a+b;
        d=a-b;
        if((a-b)==1)
        {
            ck=1;
            for(j=2; j<=sqrt(s); j++)
            {
                if(s%j==0)
                {
                    ck=0;
                    break;
                }
            }
        }
        else
            ck=0;
        if(ck==1)
            cout << "YES\n" ;
        else
            cout << "NO\n" ;
    }
    return 0;
}
