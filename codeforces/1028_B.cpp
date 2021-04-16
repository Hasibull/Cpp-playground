#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;

    cin>>n>>m;

    int val=0;

    string ans1="",ans2="";

    while(true){
        ans1+="4";
        val+=4;
        if(val>=n){
            break;
        }
    }

    for(int i=0; i<ans1.size(); i++){
        ans2+="5";
    }

    ans1+="5";
    ans2+="5";

    cout<<ans1<<endl;
    cout<<ans2<<endl;

    return 0;
}
