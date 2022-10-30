#include<bits/stdc++.h>

using namespace std;

int main()
{
    int tc,n,k1,k2,mk1=0,mk2=0;

    cin>>tc;

    while(tc--){
        cin>>n>>k1>>k2;
        int val=0;
        for(int i=0; i<k1; i++){
            cin>>val;
            if(mk1<val){
                mk1=val;
            }
        }
        for(int i=0; i<k2; i++){
            cin>>val;
            if(mk2<val){
                mk2=val;
            }
        }
        if(mk2>mk1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
        mk1=0;mk2=0;
    }
    return 0;
}
