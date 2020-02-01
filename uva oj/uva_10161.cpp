#include<bits/stdc++.h>

using namespace std;
int main()
{
    long N,i,j,k,l,n,x,y;

    while(scanf("%ld",&N) && N){
        n = sqrt(N * 1.);
        N -= n*n;
        if(!N){
            if(n & 1){
                x = 1;
                y = n;
            }
            else{
                x = n;
                y = 1;
            }
        }
        else{
            n++;
            x = y = n;
            if(n & 1){
                if(N <= n)
                    y = N;
                else
                    x -= N%n;
            }
            else{
                if(N <= n)
                    x = N;
                else
                    y -= N%n;
            }
        }
        printf("%ld %ld\n",x,y);

    }
    return 0;
}
