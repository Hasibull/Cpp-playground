#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,up=0,lw=0;
    string ch;

    cin>>n;
    cin.ignore();

    getline(cin,ch);

    for(int i=0; i!=ch.size(); i++){
        if(ch[i]=='X'){
            up++;
        }
        if(ch[i]=='x'){
            lw++;
        }
    }
    int ct=0;
    if(up==lw){
        cout<<"0"<<endl<<ch<<endl;
    }
    else if(up>lw){
        cout<<(n/2)-lw<<endl;
        for(int i=0; i<n; i++){
            if(ch[i]=='X' && ct<((n/2)-lw)){
                cout<<"x";
                ct++;
            }
            else{
                cout<<ch[i];
            }
        }
        cout<<endl;
    }
    else{
        cout<<(n/2)-up<<endl;
        for(int i=0; i<n; i++){
            if(ch[i]=='x' && ct<((n/2)-up)){
                cout<<"X";
                ct++;
            }
            else{
                cout<<ch[i];
            }
        }
        cout<<endl;
    }
    return 0;
}
