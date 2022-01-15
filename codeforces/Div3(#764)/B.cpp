#include<bits/stdc++.h>

using namespace std;

int main()
{
    int tc;

    cin>>tc;

    while(tc--){
        int a,b,c;

        cin>>a>>b>>c;

        int ck=0;

        int newA=b-(c-b);

        if(newA>=a && newA%a==0 && newA!=0){
            cout<<"YES"<<endl;
            ck=1;
            continue;
        }
        
        int newB=a+(c-a)/2;

        if(newB>=b && (c-a)%2==0 && newB%b==0 && newB!=0){
            cout<<"YES"<<endl;
            ck=1;
            continue;
        }
        
        // int newC=a+(2*(b-a));

        int newC=b+(b-a);

        if(newC>=c && newC%c==0 && newC!=0){
            cout<<"YES"<<endl;
            ck=1;
            continue;
        }

        if(ck==0){
            cout<<"NO"<<endl;
        }

    }
    return 0;
}