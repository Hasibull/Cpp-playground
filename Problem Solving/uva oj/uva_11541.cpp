#include<bits/stdc++.h>

using namespace std;
int main()
{
    int a,i,j,n,l,k,ck;
    char ch[100000],ch1,ch2;

    cin>>n;
    getchar();

    for(i=1; i<=n; i++){
        gets(ch);
        l=0;
        l=strlen(ch);
        ck=0;a=0;
        ch1=ch[0];
        cout<<"Case "<<i<<": ";

        for(j=0; j<l; j++){
            if(ch[j]>='0' && ch[j]<='9'){
                a=((10*a)+(ch[j]-'0'));
                if(j==(l-1)){
                    for(k=0; k<a; k++){
                        printf("%c",ch1);
                    }
                }
                ck=1;
            }
            else if(ch[j]>='A' && ch[j]<='Z'){
                for(k=0; k<a; k++){
                    printf("%c",ch1);
                }
                ch1=ch[j];
                a=0;
                ck=0;
            }
        }
        cout<<endl;
    }
    return 0;
}
