#include<bits/stdc++.h>

using namespace std;
int main()
{
    int i,j,k,l,n,a,b;
    char ch[105];

    scanf("%d",&n);
    getchar();
    for(i=1; i<=n; i++){
        a=0,b=0,l=0;
        gets(ch);
        l=strlen(ch);
        a=(l/2);
        b=l-a;
        for(j=(a-1); j>=0; j--){
            printf("%c",ch[j]);
        }
        for(j=(l-1); j>=b; j--){
            printf("%c",ch[j]);
        }
        printf("\n");
    }
    return 0;
}
