#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long n;
    string ch="";

    while(scanf("%lld",&n),n){
        int ct=0;
        while(n>0){
            if(n%2==1){
                ch+="1";
                ct++;
            }
            else{
                ch+="0";
            }
            n/=2;
        }
        reverse(ch.begin(),ch.end());
        cout<<"The parity of "<<ch<<" is "<<ct<<" (mod 2)."<<endl;
        ch.clear();
    }
    return 0;
}
