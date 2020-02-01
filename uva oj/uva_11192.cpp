#include<bits/stdc++.h>

using namespace std;
int main()
{
    int n,i,j,l,d,a,b;
    char ch[150];

    while(scanf("%d",&n),n){
        getchar();
        gets(ch);
        l=0;a=0;b=0;

        l=strlen(ch);

        d=ceil(l/n);
        b=d;

        for(j=0; j<n; j++){
            for(i=(b-1); i>=a; i--){
                printf("%c",ch[i]);
            }
            a=b;
            b+=d;
            if(b>l){
                b=l;
            }
        }
        cout<<endl;
    }

    return 0;
}
