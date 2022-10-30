#include<bits/stdc++.h>

using namespace std;

int main()
{
    string ch,ch1;

    getline(cin,ch);
    getline(cin,ch1);

    int ps=0,lft=0,rht=0;
    for(int i=0; i!=ch.size(); i++){
        if(ch[i]=='|'){
            ps=i;
            break;
        }
    }
    lft=ps;
    rht=ch.size()-ps-1;

    int sz=ch1.size();

    if(lft==rht){
        if(sz%2!=0){
            cout<<"Impossible"<<endl;
        }
        else{
            for(int i=0; i<lft; i++){
                cout<<ch[i];
            }
            for(int i=0; i<(sz/2); i++){
                cout<<ch1[i];
            }
            cout<<"|";
            for(int i=lft+1; i!=ch.size(); i++){
                cout<<ch[i];
            }
            for(int i=(sz/2); i!=sz; i++){
                cout<<ch1[i];
            }
            cout<<endl;
        }
    }
    else if(lft<rht){
        int chk=(rht-lft);
        if(sz>=chk && (sz-chk)%2==0){
            for(int i=0; i<lft; i++){
                cout<<ch[i];
            }
            for(int i=0; i<chk; i++){
                cout<<ch1[i];
            }
            for(int i=chk; i<(chk+((sz-chk)/2)); i++){
                cout<<ch1[i];
            }
            cout<<"|";
            for(int i=lft+1; i!=ch.size(); i++){
                cout<<ch[i];
            }
            for(int i=(chk+((sz-chk)/2)); i!=sz; i++){
                cout<<ch1[i];
            }
            cout<<endl;
        }
        else{
            cout<<"Impossible"<<endl;
        }
    }
    else if(rht<lft){
        int chk=(lft-rht);
        if(sz>=chk && (sz-chk)%2==0){
            for(int i=0; i<lft; i++){
                cout<<ch[i];
            }
            for(int i=(chk+((sz-chk)/2)); i!=sz; i++){
                cout<<ch1[i];
            }
            cout<<"|";
            for(int i=lft+1; i!=ch.size(); i++){
                cout<<ch[i];
            }
            for(int i=0; i<chk; i++){
                cout<<ch1[i];
            }
            for(int i=chk; i<(chk+((sz-chk)/2)); i++){
                cout<<ch1[i];
            }
            cout<<endl;
        }
        else{
            cout<<"Impossible"<<endl;
        }
    }
    return 0;
}
