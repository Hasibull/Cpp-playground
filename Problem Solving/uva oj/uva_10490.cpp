#include<bits/stdc++.h>

using namespace std;
int main()
{
    unsigned long long a,b,c,p,i,j,sum=0,ck=1;

    while(1){
        cin>>a;

        if(a==0)
            break;

        c=0;sum=0;ck=1;
        c=a-1;
        b=pow(2,c)*(pow(2,a)-1);

        for(i=2; i<a; i++){
            if(a%i==0){
                ck=0;
                break;
            }
        }

        if(ck==1){
            if(a==11 || a==23 || a==29)
                cout<<"Given number is prime. But, NO perfect number is available."<<endl;

            else
                cout<<"Perfect: "<<b<<"!"<<endl;
        }
        else
            cout<<"Given number is NOT prime! NO perfect number is available."<<endl;

    }

    return 0;
}
