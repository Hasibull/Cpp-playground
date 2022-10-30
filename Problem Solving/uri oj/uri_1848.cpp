#include<bits/stdc++.h>

using namespace std;

int main()
{
    string ch;
    int ans=0;

    while(getline(cin,ch)){
        if(ch == "caw caw"){
            cout<<ans<<endl;
            ans=0;
        }

        if(ch[2]=='*'){
            ans+=1;
        }
        if(ch[1]=='*'){
            ans+=2;
        }
        if(ch[0]=='*'){
            ans+=4;
        }
    }

    return 0;
}