#include<bits/stdc++.h>

using namespace std;
int main()
{
    int i,j,k,l,t,ck;
    char ch[10005];

    cin>>t;
    getchar();

    while(t--){
        gets(ch);
        l=0;
        l=strlen(ch);
        k=sqrt(l);

        if((k*k)!=l)
            cout<<"INVALID"<<endl;

        else{
            for(i=0; i<sqrt(l); i++){
                for(j=i; j<l; j+=k){
                    printf("%c",ch[j]);
                }
            }
            cout<<endl;
        }
    }
    return 0;
}
