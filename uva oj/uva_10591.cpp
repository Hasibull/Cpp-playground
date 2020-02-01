#include<bits/stdc++.h>

using namespace std;
int main()
{
    long long i,j,n,t;

    scanf("%lld",&t);
    for(i=1; i<=t; i++)
    {
        long long sum=0,a=0,b=0,ck=0;;
        scanf("%lld",&n);
        b=n;
        while(1)
        {
            while(b!=0)
            {
                a=b%10;
                sum+=(a*a);
                b/=10;
            }
            if(sum==1)
            {
                ck=1;
                break;
            }
            else if(sum>1 && sum<10)
            {
                ck=0;
                break;
            }
            else if(sum>=10)
            {
                b=sum;
            }
        }
        if(ck==1)
            printf("Case #%lld: %lld is a Happy number.\n",i,n);
        else
            printf("Case #%lld: %lld is an Unhappy number.\n",i,n);
    }
    return 0;
}
