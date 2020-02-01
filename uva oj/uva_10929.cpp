#include<bits/stdc++.h>

using namespace std;
int main()
{
    int i,j,l,d;
    char ch[1009];

    while(1){
        cin>>ch;

        if(strcmp(ch,"0")==0)
            break;

        l=strlen(ch);
        d=0;

        for(i=0; i<l; i++){
            d=((d*10)+(ch[i]-'0'))%11;
        }

        if(d==0){
            cout<<ch<<" is a multiple of 11."<<endl;
        }
        else{
            cout<<ch<<" is not a multiple of 11."<<endl;
        }

    }

    return 0;
}
