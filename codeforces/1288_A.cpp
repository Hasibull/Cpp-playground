#include<bits/stdc++.h>

using namespace std;

int main()
{
    int tc;

    cin>>tc;

    while(tc--){
        int a,b;

        cin>>a>>b;

        if(a<=b){
            cout<<"Yes"<<endl;
        }
        else if(((a/2)+ceil(b/(((a/2)+1))))<=a){
            cout<<((a/2)+ceil(b/(((a/2)+1))))<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}
