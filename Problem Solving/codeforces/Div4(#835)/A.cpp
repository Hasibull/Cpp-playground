#include<bits/stdc++.h>

using namespace std;

int main()
{
    int tc;

    cin>>tc;

    while(tc--) {
        int a,b,c;
        
        cin>>a>>b>>c;

        if((a<=b && a>=c) || (a>=b && a<=c)) {
            cout<<a<<endl;
        }
        else if((b>=a && b<=c) || (b>=c && b<=a)) {
            cout<<b<<endl;
        }
        else {
            cout<<c<<endl;
        }
    }

    return 0;
}