#include<bits/stdc++.h>

using namespace std;
int main()
{
    int n,arr[11][11],i,j,k,l,m=1,sum,a,b,c,d;

    while(scanf("%d",&n),n){
        a=0;b=0;c=0;d=0;
        for(i=0; i<n; i++){
            for(j=0; j<n; j++){
                cin>>arr[i][j];
            }
        }
        k=0;
        printf("Case %d:",m);
        for(j=0; j<n; j++){
            sum=0;a=0;b=0;c=0;d=0;
            for(i=j; i<n-1; i++){
                a+=arr[k][i];
            }
            for(i=j+1; i<n-1; i++){
                b+=arr[i][k];
            }
            for(i=j; i<n-1; i++){
                c+=arr[n-1][i];
            }
            for(i=j; i<n; i++){
                d+=arr[i][n-1];
            }
            k++;
            n-=1;
            sum=(a+b+c+d);
            printf(" %d",sum);
        }
        m++;
        printf("\n");
    }
    return 0;
}
