#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,a,sum=0;

    cin>>n>>m;

    for(int i=1; i<=n; i++){
        cin>>a;

        sum+=a;

        if((sum/m)>0){
            cout<<sum/m<<endl;
            sum=sum-((sum/m)*m);
        }
        else{
            cout<<"0"<<endl;
        }
    }
    return 0;
}
