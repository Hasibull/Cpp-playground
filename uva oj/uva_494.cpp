#include<bits/stdc++.h>

using namespace std;
int main()
{
    long int i,j,k,ck,l;
    char ch[10009];

    while(gets(ch)){
        l=0;ck=0;k=0;

        for(i=0; ch[i]; i++){
            if((ch[i]>='A' && ch[i]<='Z') || (ch[i]>='a' && ch[i]<='z')){
                ck=1;
            }
            else{
                k+=ck;
                ck=0;
            }
        }
        k+=ck;
        cout<<k<<endl;
    }

    return 0;
}
