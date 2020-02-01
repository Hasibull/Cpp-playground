#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    cin>>n;

    int ct=0;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(i%2==0 && j%2==0){
                ct++;
            }
            else if(i%2==1 && j%2==1){
                ct++;
            }
        }
    }
    cout<<ct<<endl;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(i%2==0 && j%2==1){
                cout<<".";
            }
            else if(i%2==0 && j%2==0){
                cout<<"C";
            }
            else if(i%2==1 && j%2==0){
                cout<<".";
            }
            else if(i%2==1 && j%2==1){
                cout<<"C";
            }
        }
        cout<<endl;
    }
    return 0;
}
