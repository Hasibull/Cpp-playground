#include<bits/stdc++.h>

using namespace std;
int main()
{
    int i,j,l,n;
    char ch[30];

    while(gets(ch)){
        l=0;n=0;
        int ck=1;
        l=strlen(ch);
        for(i=0; i<l; i++){
            if(ch[i]>='a' && ch[i]<='z'){
                n+=(ch[i]-96);
            }
            else if(ch[i]>='A' && ch[i]<='Z'){
                n+=(ch[i]-38);
            }
        }

        for(i=2; i<n; i++){
            if(n%i==0){
                ck=0;
                break;
            }
        }
        if(ck==1){
            cout<<"It is a prime word."<<endl;
        }
        else{
            cout<<"It is not a prime word."<<endl;
        }
    }
    return 0;
}
