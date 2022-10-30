#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,ct1=0,ct0=0;
    string ch;

    cin>>n;
    cin.ignore();
    getline(cin,ch);

    for(int i=0; i!=ch.size(); i++){
        if(ch[i]=='1'){
            ct1++;
        }
        else if(ch[i]=='0'){
            ct0++;
        }
    }
    ///cout<<ct1<<" "<<ct0<<endl;
    if(ct1==ct0){
        cout<<"0"<<endl;
    }
    else{
        if(ct1==1 && ct0==0){
            cout<<n<<endl;
        }
        else if(ct0==1 && ct1==0){
            cout<<n<<endl;
        }
        else if(ct1==1 || ct0==1){
            cout<<n-2<<endl;
        }
        else{
            ///cout<<ct1<<" "<<ct0<<endl;
            cout<<max(ct1,ct0)-min(ct1,ct0)<<endl;
        }
    }
    return 0;
}
