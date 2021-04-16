#include<bits/stdc++.h>

using namespace std;

int main()
{
    int tc;

    cin>>tc;

    while(tc--){
        string val="";

        int a=1,b=3,c=6,d=10;

        cin>>val;

        int ck=val[0]-'0';

        int ans = (ck-1)*d;

        int len = val.size();

        if(len == 1){
            ans += a;
        }
        else if(len == 2){
            ans += b;
        }
        else if(len == 3){
            ans += c;
        }
        else if(len == 4){
            ans += d;
        }
        else if(len == 5){
            ans += 15;
        }

        cout<<ans<<endl;
    }

    return 0;
}
