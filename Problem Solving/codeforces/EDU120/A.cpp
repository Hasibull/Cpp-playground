#include<bits/stdc++.h>

using namespace std;

int main()
{
    int tc;

    cin>>tc;

    while(tc--){
        int a,b,c;

        cin>>a>>b>>c;

        if(abs(a-b)==c || abs(b-c)==a || abs(c-a)==b){
            cout<<"YES"<<endl;
        }
        else if((a%2==0 && b==c) || (b%2==0 && a==c) || (c%2==0 && a==b)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
