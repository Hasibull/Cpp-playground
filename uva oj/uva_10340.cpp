#include<bits/stdc++.h>

using namespace std;

char ch[100000],ch1[100000];

int main()
{
    int i=0,j=0,k=0,ck=0,l=0,l1=0;

    while(scanf("%s %s",ch,ch1)==2){
        l=0;l1=0;ck=0;k=0;

        l=strlen(ch);l1=strlen(ch1);
        for(i=0; i<l; i++){
            for(j=k; j<l1; j++){
                if(ch[i]==ch1[j]){
                    ck=1;
                    k=j+1;
                    break;
                }
                else{
                    ck=0;
                }
            }
            if(ck==0)
                break;
        }
        if(ck==0)
            cout<<"No"<<"\n";
        else
            cout<<"Yes"<<"\n";
    }
    return 0;
}
