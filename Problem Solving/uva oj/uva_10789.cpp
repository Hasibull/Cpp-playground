#include<bits/stdc++.h>

using namespace std;
int main()
{
    int i,j,l,l1,t,ck[222];
    char ch[2005];

    cin>>t;
    getchar();

    for(i=1; i<=t; i++){
        gets(ch);
        l=0;
        l=strlen(ch);
        memset(ck,0,sizeof(ck));
        for(j=0; j<l; j++){
            ck[ch[j]]++;
        }
        int check=1,k,c=0;
        printf("Case %d: ",i);
        for(k=0; k<222; k++){
            check=1;
            if(ck[k]>1){
                for(j=2; j<ck[k]; j++){
                    if((ck[k])%j==0){
                        check=0;
                        break;
                    }
                }
                if(check==1){
                    c++;
                    printf("%c",k);
                }
            }
        }
        if(c==0){
            printf("empty");
        }
        cout<<endl;
    }
    return 0;
}
