#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[101];
    char b[101];
    gets(a);
    gets(b);
    for(int i=0;i<strlen(a);i++)
    {
        if(!((a[i]>='a')&&(a[i]<='z')))
        {
            a[i]=a[i]+32;
        }
    }
    for(int j=0;j<strlen(b);j++)
    {
        if(!((b[j]>='a')&&(b[j]<='z')))
        {
            b[j]=b[j]+32;
        }
    }

    cout<<strcmp(a,b)<<"\n";

    return 0;
}
