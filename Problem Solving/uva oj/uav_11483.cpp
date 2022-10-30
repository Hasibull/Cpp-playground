#include<bits/stdc++.h>

using namespace std;
int main()
{
    int i,j,k=1,n,l,l1;
    char ch[101];

    while(scanf("%d",&n) && n!=0){
        getchar();
        cout<<"Case "<<k<<":"<<endl;
        cout<<"#include<string.h>\n"<<"#include<stdio.h>\n"<<"int main()\n"<<"{\n";
        for(i=0; i<n; i++){
            gets(ch);
            ///getchar();
            l=0;
            l=strlen(ch);
            cout<<"printf(\"";
            for(j=0; j<l; j++){
                if(isalnum(ch[j]) || isspace(ch[j]))
                    printf("%c",ch[j]);
                else if(ch[j] == '\"')
                    printf("\\\"");
                else if(ch[j] == '\'')
                    printf("\\\'");
                else if(ch[j] == '\\')
                    printf("\\\\");
            }
            cout<<"\\n\");"<<endl;
        }
        cout<<"printf(\"\\n\");\n"<<"return 0;\n"<<"}\n";
        k++;
    }
    return 0;
}
