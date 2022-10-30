#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    string ch;

    cin>>n;

    cin>>ch;

    int len=ch.size();
    int cka=0,ckb=0;

    for(int i=0; i<len; i++){
        if(ch[i]=='A'){
            cka++;
        }
        else{
            ckb++;
        }
    }
    if(cka>ckb){
        cout<<"Anton"<<endl;
    }
    else if(ckb>cka){
        cout<<"Danik"<<endl;
    }
    else{
        cout<<"Friendship"<<endl;
    }
    return 0;
}
