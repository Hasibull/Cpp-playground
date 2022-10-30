#include<bits/stdc++.h>

using namespace std;
int main()
{
    int a,b,c,t,f,i,j,ck;

    cin>>t;
    while(t--){
        cin>>f;
        int sum=0;
        for(i=1; i<=f; i++){
            cin>>a>>b>>c;
            sum+=(a*c);
        }
        cout<<sum<<endl;
    }
    return 0;
}
