#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,l=0;
    string ch;

    cin>>n;
    cin>>ch;

    l=ch.size();
    int ck=0;

    for(int i=0; i<l; i+=2){
        if(ch[i]=='a' && ch[i+1]=='a'){
            ch[i]='b';
            ck++;
        }
        else if(ch[i]=='b' && ch[i+1]=='b'){
            ch[i]='a';
            ck++;
        }
    }
    cout<<ck<<"\n"<<ch<<endl;

    return 0;
}
