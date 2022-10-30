#include<bits/stdc++.h>

using namespace std;
int main()
{
    int i,ck=0,l=0;
    char ch[20];

    cin>>ch;

    l=strlen(ch);
    for(i=0; i<l; i++){
        if(ch[i]=='4' || ch[i]=='7'){
            ck++;
        }
    }
    if(ck%4==0 || ck%7==0)
        cout<<"YES"<<endl;

    else
        cout<<"NO"<<endl;

    return 0;
}
