#include<bits/stdc++.h>

using namespace std;
int main()
{
    int i,j,k,l;
    char ch[100];

    while(scanf("%[^\n]",ch)!=EOF){
        getchar();
        l=0;
        l=strlen(ch);
        int ck=0,ck1=0;
        for(i=0; i<l; i++){
            if(ck==0 && ch[i]=='_'){
                cout<<"<i>";
                ck=1;
            }
            else if(ck==1 && ch[i]=='_'){
                cout<<"</i>";
                ck=0;
            }
            else if(ck1==0 && ch[i]=='*'){
                cout<<"<b>";
                ck1=1;
            }
            else if(ck1==1 && ch[i]=='*'){
                cout<<"</b>";
                ck1=0;
            }
            else{
                cout<<ch[i];
            }
        }
        cout<<endl;
    }
    return 0;
}
