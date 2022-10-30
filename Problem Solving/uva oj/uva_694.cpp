#include<bits/stdc++.h>

using namespace std;
int main()
{
    long int a,b,ck,j=1;

    while(1){
        cin>>a>>b;
        ck=0;
        if(a<0 && b<0)
            break;

        long int n=a;

        while(a<=b){

            if(a==1){
                ck++;
                break;
            }
            if(a%2==0){
                ck++;
                a/=2;
            }
            else{
                ck++;
                a=(a*3)+1;
            }

        }
        cout<<"Case "<<j<<": A = "<<n<<", limit = "<<b<<", number of terms = "<<ck<<endl;
        j++;
    }
    return 0;
}
