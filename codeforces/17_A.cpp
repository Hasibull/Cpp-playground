#include<bits/stdc++.h>

using namespace std;
int main()
{
    int arr[1009],i,j,k=0,l,m,prime[1000],num[1000],a,b,ck=0;

    memset(arr,0,sizeof(arr));
    arr[0]=1;arr[1]=1;
    for(i=4; i<=1000; i+=2){
        arr[i]=1;
    }
    for(i=3; i<=100; i+=2){
        for(j=i+i; j<=1000; j+=i){
            arr[j]=1;
        }
    }
    j=0;
    for(i=0; i<=1000; i++){
        if(arr[i]==0){
            prime[j]=i;
            j++;
        }
    }
    k=j;
    memset(arr,0,sizeof(arr));
    m=0;
    for(i=0; i<k-1; i++){
        arr[i]=prime[i]+prime[i+1]+1;
    }
    memset(num,0,sizeof(num));
    for(i=0; i<k; i++){
        for(l=0; l<k; l++){
            if(arr[i]==prime[l]){
                num[m]=arr[i];
                m++;
            }
        }
    }
    k=m;
    cin>>a>>b;
    for(i=1; i<=a; i++){
        for(j=0; j<k; j++){
            if(i==num[j]){
                ck++;
            }
        }
    }
    if(ck>=b)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}
