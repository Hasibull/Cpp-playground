#include<bits/stdc++.h>

using namespace std;
int main()
{
    int i,j,l=0,l1=0,t,s,s1;
    int ck=1,a=0,b=0,d=0,e=0;
    char ch[30],ch1[30],ch2[30],ch3[30];

    cin>>t;
    getchar();

    for(i=1; i<=t; i++){
        gets(ch);
        gets(ch1);
        s=0;s1=0;
        ck=1,a=0,b=0,d=0,e=0;

        l=strlen(ch);
        l1=strlen(ch1);

        for(j=0; ch[j]; j++){
            if(ch[j]>='a' && ch[j]<='z'){
                ch2[a]=ch[j];
                a++;
            }
        }
        ch2[a]='\0';
        for(j=0; ch1[j]; j++){
            if(ch1[j]>='a' && ch1[j]<='z'){
                ch3[b]=ch1[j];
                b++;
            }
        }
        ch3[b]='\0';
        for(j=0; j<l; j++){
            if(ch[j]==' ')
                s++;
        }
        for(j=0; j<l1; j++){
            if(ch1[j]==' ')
                s1++;
        }
        d=0;e=0;

        d=strlen(ch2);
        e=strlen(ch3);

        if(l==l1){
            for(j=0; j<l; j++){
                if(ch[j]!=ch1[j]){
                    ck=0;
                    break;
                }
            }
            if(ck==1){
                cout<<"Case "<<i<<": Yes"<<endl;
            }
            else
                cout<<"Case "<<i<<": Wrong Answer"<<endl;

        }
        else{
            if(d!=e)
                cout<<"Case "<<i<<": Wrong Answer"<<endl;

            else{
                if(s>s1)
                    cout<<"Case "<<i<<": Output Format Error"<<endl;
            }
        }
    }
    return 0;
}
