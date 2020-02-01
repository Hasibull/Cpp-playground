#include<bits/stdc++.h>

using namespace std;

int main()
{
    int tc,x,y,ck=1;

    cin>>tc;

    while(tc--){
        cin>>x>>y;
        if(x%2==0 && y%2==0){
            cout<<"YES"<<endl;
        }
        else if(x%2==0 && y%2!=0){
            cout<<"YES"<<endl;
        }
        else if(x==y){
            cout<<"YES"<<endl;
        }
        else if(x%2!=0){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}
