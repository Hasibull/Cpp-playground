#include<bits/stdc++.h>
#define MAX 1000001
#define N 1000000

using namespace std;

char prime[MAX];
int data[N];
int len;

void primeGenerator()
{
    int x = sqrt( N );
    prime[0] = prime[1] = 1;
    for( int i=4; i<=N; i+=2)
        prime[i]=1;

    for( int i=3; i<=x; i+=2){
        if( prime[i]==0){
            for( int j=i+i; j<=N; j+=i)
                prime[j]=1;
        }
    }
    int j=0;
    for(int i=0; i<=N; i++){
        if(prime[i]!=1){
            data[j]=i;
            j++;
        }
    }
    len=j;
}

int main()
{
    int n;
    int ck=0;

    primeGenerator();

    while(scanf("%d",&n) && n){

        for(int i=0; i<len; i++){
            if(n%data[i]==0){
                ck++;
            }
        }
        cout<<n<<" : "<<ck<<endl;
        ck=0;
    }
    return 0;
}
