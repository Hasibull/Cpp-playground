#include<bits/stdc++.h>

using namespace std;
int main()
{
    long long n,a,b,i,j,k,l,arr[25];

    char ch[100];

    while(scanf("%lld",&n)==1){
        i=0;j=0;k=0;l=0;
        while(n>0){
            arr[i]=n%10;
            n/=10;
            i++;
            l=i;
        }
        sort(arr,arr+l);
        b+=arr[0];
        for(i=0; i<l; i++){
            b=arr[i]
        }
    }
}
