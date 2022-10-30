#include<bits/stdc++.h>

using namespace std;

long int gcd(int x,int y){
    long term=0,l=0;
    if(x<y){
        while(x!=0){
            term=y%x;
            y=x;
            x=term;
        }
        return y;
    }
    else{
        while(y!=0){
            term=x%y;
            x=y;
            y=term;
        }
        return x;
    }
}
int main()
{
    long int i,j,n,a,g;

    while(1){
        cin>>n;
        g=0;
        if(n==0)
            break;
        else{
            g=0;
            for(i=1; i<n; i++){
                for(j=i+1; j<=n; j++){
                    g+=gcd(i,j);
                }
            }
            cout<<g<<endl;
        }
    }
    return 0;
}
