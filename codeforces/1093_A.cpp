#include<iostream>

using namespace std;
int main()
{
    int a,b,i,j,t,k,arr[6]={2,3,4,5,6,7};

    cin>>t;
    for(i=1; i<=t; i++){
        cin>>a;
        b=0;
        for(j=6; j>=0; j--){
            if(a/arr[j]>0){
                b+=(a/arr[j]);
                a/=arr[j];
            }
        }
        cout<<b<<endl;
    }
    return 0;
}
