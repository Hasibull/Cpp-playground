#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        char ch[1000005];
        cin>>ch;
        int cnt=0;
        int x=strlen(ch);
        if(ch[0]=='?'&&x>1)
        {
            if(ch[1]=='a')
            {
                ch[0]='b';
            }
            else if(ch[1]=='b')
            {
                ch[0]='c';
            }
            else
            {
                ch[0]='a';
            }
        }
        else if(ch[0]=='?'&&x==1)
        {
            ch[0]='a';
        }
        for(int i=1; i<x; i++)
        {
            if(ch[i]=='?')
            {
                if((ch[i-1]=='a'&&ch[i+1]=='b')||(ch[i-1]=='b'&&ch[i+1]=='a'))
                    ch[i]='c';
                else if((ch[i-1]=='a'&&ch[i+1]=='c')||(ch[i-1]=='c'&&ch[i+1]=='a'))
                    ch[i]='b';
                else if((ch[i-1]=='b'&&ch[i+1]=='c')||(ch[i-1]=='c'&&ch[i+1]=='b'))
                    ch[i]='a';
                else if(ch[i-1]=='a')
                    ch[i]='b';
                else if(ch[i-1]=='b')
                    ch[i]='c';
                else if(ch[i-1]=='c')
                    ch[i]='a';
            }
        }
        //cout<<ch<<endl;
        for(int i=0; i<x-1; i++)
        {
            int x=ch[i],y=ch[i+1];
            if(ch[i]==ch[i+1])
            {
                cnt=1;
                //cout<<ch[i]<<" "<<ch[i+1]<<endl;
                break;
            }
        }
        if(cnt==1)
        {
            cout<<-1<<endl;
        }
        else
        {
            cout<<ch<<endl;
        }
    }
    return 0;
}
