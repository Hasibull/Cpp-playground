#include<bits/stdc++.h>

using namespace std;
int main()
{
    int i,j,k,l;
    char ch[100000];

    while(1){
        gets(ch);

        if(strcmp(ch,"*")==0)
            break;

        l=0;
        l=strlen(ch);

        int ck=1,ck1=1;
        char check=ch[0];

        for(i=0; i<l; i++){
            if(ck==1 && ((ch[i]>='a' && ch[i]<='z') || (ch[i]>='A' && ch[i]<='Z'))){
                if(ch[i]>='A' && ch[i]<='Z'){
                    if(ck==1 && check!=ch[i] && check!=ch[i]+32){
                        ck1=0;
                        break;
                    }
                }
                else if(ch[i]>='a' && ch[i]<='z'){
                    if(ck==1 && check!=ch[i] && check!=ch[i]-32){
                        ck1=0;
                        break;
                    }
                }
                ck=0;
            }
            else if(ck==0 && (ch[i]<'a' || ch[i]>'z') && (ch[i]<'A' || ch[i]>'Z')){
                ck=1;
            }
        }
        if(ck1==1){
            cout<<"Y"<<endl;
        }
        else{
            cout<<"N"<<endl;
        }
    }
    return 0;
}
