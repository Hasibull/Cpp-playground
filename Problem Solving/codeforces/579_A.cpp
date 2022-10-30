#include<bits/stdc++.h>

using namespace std;

int main()
{
    long int n,ct=0;

    cin>>n;

    while(n!=0){
        if(n%2==1){
            ct++;
            n/=2;
        }
        else{
            n/=2;
        }
    }
    cout<<ct<<endl;
    return 0;
}
