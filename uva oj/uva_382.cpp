#include<iostream>
#include<math.h>
#include<cstdio>

using namespace std;
int main()
{
    long long a,b,i=1,j,ck=0;

    cout<<"PERFECTION OUTPUT"<<endl;
    while(1){
        cin>>a;

        b=0;

        if(a==0)
            break;

        for(i=1; i<a; i++){
            if(a%i==0){
                b+=i;
            }
        }
        if(b==a)
            printf("%5lld  PERFECT\n",a);

        else if(b>a)
            printf("%5lld  ABUNDANT\n",a);

        else if(b<a)
            printf("%5lld  DEFICIENT\n",a);

    }
    cout<<"END OF OUTPUT"<<endl;

    return 0;
}
