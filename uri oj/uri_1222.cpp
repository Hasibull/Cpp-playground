#include<bits/stdc++.h>

using namespace std;
int main()
{
    int i,j,k,l,n,len,c;
    char ch[100000];

    while(scanf("%d %d %d",&n,&l,&c)!=EOF){
        getchar();
        gets(ch);
        k=0;
        j=0;
        len=0;
        len=strlen(ch);

        k=ceil((float)len/(float)c);
        j=ceil((float)k/(float)l);

        cout<<j<<endl;
    }
    return 0;
}
