#include<bits/stdc++.h>

using namespace std;
int main()
{
    long int a,b=1,ck=0,check[200],i=0;

    cin>>a;

    check[0]=a;

    ck++;

    while(1){

        a+=1;

        while(a%10==0){
            if(a%10==0)
                a/=10;
        }
        i++;

        for(int j=0; j<i; j++){
            if(a==check[j]){
                b=0;
                break;
            }
        }
        check[i]=a;

        if(b==0)
            break;


        ck++;
    }
    cout<<ck<<endl;

    return 0;
}
