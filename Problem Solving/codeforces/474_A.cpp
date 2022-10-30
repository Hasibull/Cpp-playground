#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,i,j,k,l=0,l1=0;

    char ch[5],ch1[1000],ch2[1000]="qwertyuiopasdfghjkl;zxcvbnm,./";

    cin>>ch;
    cin>>ch1;

    l=strlen(ch1);
    l1=strlen(ch2);

    if(ch[0]=='R'){
        for(i=0; i<l; i++){
            for(j=0; j<l1; j++){
                if(ch1[i]==ch2[j])
                    cout<<ch2[j-1];
            }
        }
    }

    if(ch[0]=='L'){
        for(i=0; i<l; i++){
            for(j=0; j<l1; j++){
                if(ch1[i]==ch2[j])
                    cout<<ch2[j+1];
            }
        }
    }
    return 0;
}
