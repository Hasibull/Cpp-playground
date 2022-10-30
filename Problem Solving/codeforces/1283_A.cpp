#include<bits/stdc++.h>

using namespace std;

int main()
{
    int tc,h,m,ans=0;

    cin>>tc;

    while(tc--){
        cin>>h>>m;

        if(m==0){
            cout<<(24-h)*60<<endl;
        }
        else{
            cout<<((23-h)*60)+(60-m)<<endl;
        }
    }
    return 0;
}
