#include<bits/stdc++.h>

using namespace std;
int main()
{
    long long int a,b,c=0,i,j,div,t,n=0,ck[10000]={0};

    cin>>t;

    while(t--){
        cin>>a>>b;

        memset(ck,0,sizeof(ck));

        for(i=a; i<=b; i++){
            for(j=1; j<=i; j++){
                if(i%j==0){
                    ck[i]++;
                }
            }
        }
        c=0;n=0;

        for(i=a; i<=b; i++){
            if(c<ck[i]){
                c=ck[i];
                n=i;
            }
        }
        cout<<"Between "<<a<<" and "<<b<<", "<<n<<" has a maximum of "<<c<<" divisors."<<endl;
    }
    return 0;
}
