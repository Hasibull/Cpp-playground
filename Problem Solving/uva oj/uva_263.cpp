#include<bits/stdc++.h>

using namespace std;
int main()
{
    long long i,j,k,l,ck,n,a,b,arr[20],arr1[1009];

    while(scanf("%lld",&n),n){
        k=0;l=0;ck=0;
        printf("Original number was %lld\n",n);
        memset(arr1,0,sizeof(arr1));
        while(1){
            a=0;b=0;i=0;memset(arr,0,sizeof(arr));
            while(n>0){
                arr[i]=n%10;
                n/=10;
                i++;
                k=i;
            }
            ///i--;
            sort(arr,arr+k);
            a=arr[0];
            for(j=1; j<k; j++){
                a=(a*10)+arr[j];
            }
            b=arr[k-1];
            for(j=k-2; j>=0; j--){
                b=(b*10)+arr[j];
            }
            arr1[l]=b-a;
            n=arr1[l];
            l++;

            printf("%lld - %lld = %lld\n",b,a,n);
            for(i=0; i<l-1; i++){
                for(j=i+1; j<l; j++){
                    if(arr1[i]==arr1[j]){
                        ck=1;
                    }
                }
            }
            if(ck==1){
                printf("Chain length %lld\n\n",l);
                break;
            }
        }

        ///cout<<a<<" "<<b<<endl;

    }
    return 0;
}
