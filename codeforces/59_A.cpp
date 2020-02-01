#include<bits/stdc++.h>

using namespace std;
int main()
{
    int i,j,c1=0,c2=0,ck,l=0;
    char ch[1000];

    cin>>ch;
    l=strlen(ch);

    for(i=0; i<l; i++){
        if(ch[i]>=65 && ch[i]<=90){
            c1++;
        }
        else{
            c2++;
        }
    }
    if(c2>=c1){
        for(i=0; i<l; i++){
            if(ch[i]>=65 && ch[i]<=90){
                printf("%c",ch[i]+32);
            }
            else{
                printf("%c",ch[i]);
            }
        }
    }
    else{
        for(i=0; i<l; i++){
            if(ch[i]>=65 && ch[i]<=90){
                printf("%c",ch[i]);
            }
            else{
                printf("%c",ch[i]-32);
            }
        }
    }
    cout<<endl;

    return 0;
}
