#include<bits/stdc++.h>

using namespace std;
int main()
{
    int n,i,j,k,ck;

    while(scanf("%d",&n)!=EOF){
        ck=0;
        if(n==0){
            break;
        }
        else{
            for(i=1; i<=n; i++){
                if(n%i!=0){
                    ck=i;
                }
            }
        }
        cout<<ck<<endl;
        cout<<i<<endl;
    }
    return 0;
}
