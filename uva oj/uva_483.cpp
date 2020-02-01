#include<bits/stdc++.h>

using namespace std;
int main()
{
    int l,i,j,b,k;
    char ch[1000];

    while(gets(ch))
    {
        l=strlen(ch);
        b=-1;
        for(i=0; i<l; i++)
        {
            if(ch[i]==' ')
            {
                for(j=i-1; j>b; j--)
                    printf("%c",ch[j]);
                printf(" ");
                b=i;
            }
        }
        for(i=l-1; i>b; i--)
            printf("%c",ch[i]);
        printf("\n");
    }
    return 0;
}
