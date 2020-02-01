#include<bits/stdc++.h>

using namespace std;

int main()
{
    int tc;

    cin>>tc;

    while(tc--){
        int n;
        string ch="";

        cin>>n;

        int ck=0;

        if(n & 1){
            n-=3;
            ch+="7";
            for(int i=0; i<(n/2); i++){
                ch+="1";
            }
            cout<<ch<<endl;
            ch.clear();
        }
        else{
            for(int i=0; i<(n/2); i++){
                ch+="1";
            }
            cout<<ch<<endl;
            ch.clear();
        }
    }
    return 0;
}
