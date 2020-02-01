#include<bits/stdc++.h>

using namespace std;
int main()
{
    int i,j,l;
    char ch[100000];

    while(gets(ch)){
        l=0;

        l=strlen(ch);

        for(i=0; i<l; i++){
            printf("%c",ch[i]-7);
        }
        cout<<endl;
    }
    return 0;
}
