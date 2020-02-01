#include<bits/stdc++.h>

using namespace std;
int main()
{
    int n,m,t,i,j;

    cin>>t;

    while(t--){
        cin>>n>>m;

        if((n-1)%(m-1)!=0)
            cout<<"cannot do this"<<endl;

        else
            cout<<(n-1)/(m-1)<<endl;

    }
    return 0;
}
