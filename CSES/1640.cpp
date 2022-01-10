#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,x;

    cin>>n>>x;

    int arr[n+1];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    map<int,bool>check;
    map<int,int>cnt;

    for(int i=0; i<n; i++){
        cnt[arr[i]]++;
        check[arr[i]]=true;
    }

    int ck=0,ckd=0;
    int one=-1,two=-1,value=-1;

    for(int i=0; i<n; i++){
        int val=x-arr[i];

        if(check[val]==true){
            if(val==arr[i]){
                if(cnt[arr[i]]>1){
                    ckd=1;
                    one=i;
                    value=val;
                    break;
                }
            }
            else{
                ck=1;
                one=i;
                value=val;
                break;
            }
        }
    }

    if(ck==1){
        cout<<one+1<<" ";

        for(int i=0; i<n; i++){
            if(value==arr[i]){
                cout<<i+1<<endl;
                break;
            }
        }
    }
    else if(ckd==1){
        cout<<one+1<<" ";

        for(int i=0; i<n; i++){
            if(value==arr[i] && i!=one){
                cout<<i+1<<endl;
            }
        }
    }
    else{
        cout<<"IMPOSSIBLE"<<endl;
    }

    return 0;
}