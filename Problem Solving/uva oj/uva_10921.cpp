#include<bits/stdc++.h>

using namespace std;
int main()
{
    int a=0,i,k;
    char ch[100];

    while(gets(ch)){
        a=strlen(ch);

        for(i=0; i<a; i++){
            if(ch[i]>='A' && ch[i]<='z'){
                if(ch[i]=='A' || ch[i]=='B' || ch[i]=='C'){
                    ch[i]='2';
                }
                else if(ch[i]=='D' || ch[i]=='E' || ch[i]=='F'){
                    ch[i]='3';
                }
                else if(ch[i]=='G' || ch[i]=='H' || ch[i]=='I'){
                    ch[i]='4';
                }
                else if(ch[i]=='J' || ch[i]=='K' || ch[i]=='L'){
                    ch[i]='5';
                }
                else if(ch[i]=='M' || ch[i]=='N' || ch[i]=='O'){
                    ch[i]='6';
                }
                else if(ch[i]=='P' || ch[i]=='Q' || ch[i]=='R' || ch[i]=='S'){
                    ch[i]='7';
                }
                else if(ch[i]=='T' || ch[i]=='U' || ch[i]=='V'){
                    ch[i]='8';
                }
                else if(ch[i]=='W' || ch[i]=='X' || ch[i]=='Y' || ch[i]=='Z'){
                    ch[i]='9';
                }
            }
        }
        cout<<ch<<endl;
    }
    return 0;
}
