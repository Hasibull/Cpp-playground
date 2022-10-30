#include<bits/stdc++.h>

using namespace std;

int main()
{
    int tc;

    cin>>tc;

    while(tc--){
        int a,b,c,d;

        cin>>a>>b>>c>>d;

        int mn2 = min(c,d);
        int mx2 = max(c,d);
        int mn1 = min(a,b);
        int mx1 = max(a,b);

        if(mx2>=mx1){
            if(mx1>=mn2) {
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        else{
            if(mx2>=mn1){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }

    return 0;
}
