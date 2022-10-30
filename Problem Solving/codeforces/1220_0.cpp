#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    string ch;

    cin>>n;

    cin>>ch;

    int ck=0,ck1=0;

    int l=ch.size();

    for(int i=0; i<l; i++){
        if(ch[i]=='z'){
            ck++;
        }
        if(ch[i]=='n'){
            ck1++;
        }
    }
    for(int i=1; i<=ck1; i++){
        cout<<"1"<<" ";
    }
    for(int i=1; i<=ck; i++){
        cout<<"0"<<" ";
    }
    cout<<endl;

    return 0;
}
