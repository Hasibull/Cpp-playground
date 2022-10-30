#include<bits/stdc++.h>

using namespace std;
int main()
{
    int i,j,k,l,ck[209],t;
    char ch[209],ch1[26];

    cin>>t;
    getchar();

    while(t--){
        l=0;
        gets(ch);

        l=strlen(ch);

        memset(ck,0,sizeof(ck));

        for(i=0; i<l; i++){
            if(ch[i]>='A' && ch[i]<='Z')
                ch[i]=ch[i]+32;
        }

        for(i=0; i<l; i++)
        {
            if(ch[i]>='a' && ch[i]<='z'){
                ck[ch[i]]++;
            }
        }

        k=-1;

        for(i=0; i<209; i++){
            if(k<ck[i]){
                k=ck[i];
            }
        }

        for(i=0; i<209; i++){
            if(ck[i]==k){
                printf("%c",i);
            }
        }
        cout<<endl;
    }
    return 0;
}
