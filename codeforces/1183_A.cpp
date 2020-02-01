#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,n=0,i,j,k=0,sum=0;

    cin>>a;
    k=a;
    while(k!=0){
        sum+=(k%10);
        k/=10;
    }
    if(sum%4==0){
        cout<<a<<endl;
    }
    else{
        sum=0;
        for(i=1; i<=10; i++){
            n=a+i;
            k=n;
            while(k!=0){
                sum+=(k%10);
                k/=10;
            }
            ///cout<<sum<<endl;
            if(sum%4==0){
                cout<<n<<endl;
                break;
            }
            n=0;
            sum=0;
        }
    }

    return 0;
}
