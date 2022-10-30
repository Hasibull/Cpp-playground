#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,ct=0;
    string ch;

    cin>>n;
    cin.ignore();

    for(int i=0; i<n; i++){
        cin>>ch;

        if(ch[0]=='+'){
            ct++;
        }
        else if(ch[0]=='-'){
            ct--;
        }
        else if(ch[0]=='X'){
            if(ch[1]=='+'){
                ct++;
            }
            else if(ch[1]=='-'){
                ct--;
            }
        }
        ch.clear();
    }
    cout<<ct<<endl;
    return 0;
}
