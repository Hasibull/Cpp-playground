#include<bits/stdc++.h>

using namespace std;
int main()
{
    int i,j,l,l1;
    char ch[10000],ch1[]="1234567890-=QWERTYUIOP[]\ASDFGHJKL;'ZXCVBNM,./";
    l1=strlen(ch1);
    while(gets(ch)){
        l=0;
        l=strlen(ch);
        for(i=0; i<l; i++){

            if(ch[i]==' ')
                printf("%c",ch[i]);

            for(j=0; j<l1; j++){
                if(ch[i]==ch1[j]){
                    printf("%c",ch1[j-1]);
                }
            }
        }
        cout<<endl;
    }
    return 0;
}
