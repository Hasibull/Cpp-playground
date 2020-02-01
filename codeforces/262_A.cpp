#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,k,arr[101],ck=0;

    cin>>n>>k;

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int ct=0;
    for(int i=0; i<n; i++){
        while(arr[i]!=0){
            int bit=arr[i]%10;
            arr[i]/=10;
            if(bit==4 || bit==7){
                ck++;
            }
        }
        if(ck<=k){
            ct++;
        }
        ck=0;
    }
    cout<<ct<<endl;

    return 0;
}
