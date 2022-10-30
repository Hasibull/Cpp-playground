#include<bits/stdc++.h>

using namespace std;
int main()
{
    int t,i,j,press=0,l=0;

    char ch[150];

    cin>>t;

    getchar();

    for(i=1; i<=t; i++){
        gets(ch);
        press=0;
        l=0;

        l=strlen(ch);

        for(j=0; j<l; j++){
            if(ch[j]=='a' || ch[j]=='d' || ch[j]=='g' || ch[j]=='j' || ch[j]=='m' || ch[j]=='p' || ch[j]=='t' || ch[j]=='w' || ch[j]==' '){
                press+=1;
            }
            else if(ch[j]=='b' || ch[j]=='e' || ch[j]=='h' || ch[j]=='k' || ch[j]=='n' || ch[j]=='q' || ch[j]=='u' || ch[j]=='x'){
                press+=2;
            }
            else if(ch[j]=='c' || ch[j]=='f' || ch[j]=='i' || ch[j]=='l' || ch[j]=='o' || ch[j]=='r' || ch[j]=='v' || ch[j]=='y'){
                press+=3;
            }
            else if(ch[j]=='s' || ch[j]=='z'){
                press+=4;
            }
        }
        cout<<"Case #"<<i<<": "<<press<<endl;
    }
    return 0;
}
