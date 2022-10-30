#include<bits/stdc++.h>

using namespace std;
int main()
{
    int i,j,l,d;
    char ch[100000];

    while(1){
        cin>>ch;

        if(strcmp(ch,"0")==0)
            break;

        l=0;
        l=strlen(ch);
        d=0;

        for(i=0; i<l; i++){
            d=((d*10)+(ch[i]-'0'))%17;
        }

        if(d==0){
            cout<<"1"<<endl;
        }
        else{
            cout<<"0"<<endl;
        }

    }

    return 0;
}

