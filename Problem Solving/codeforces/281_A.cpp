#include<bits/stdc++.h>

using namespace std;

int main()
{
    string ch;

    getline(cin,ch);

    if(ch[0]>='A' && ch[0]<='Z'){
        cout<<ch<<endl;
    }
    else{
        ch[0]=ch[0]-32;
        cout<<ch<<endl;
    }
    return 0;
}
