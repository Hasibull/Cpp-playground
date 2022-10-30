#include<bits/stdc++.h>

using namespace std;
int main()
{
    long int t,i,j,a,b,d,p,arr[10009],ck=0;

    while(scanf("%ld",&t)==1){
        ck=0;
        for(i=0; i<t; i++){
            cin>>arr[i];
        }
        cin>>p;

        sort(arr,arr+t,greater<long int>());
        a=0;b=0;d=0;
        for(i=0; i<(t-1); i++){
            d=0;
            for(j=i; j<t; j++){
                d=arr[i]+arr[j];
                if(d==p){
                    a=arr[j];
                    b=arr[i];
                    ck=1;
                    break;
                }
            }
        }
        cout<<"Peter should buy books whose prices are "<<a<<" and "<<b<<"."<<endl;

        cout<<endl;
    }

    return 0;
}
