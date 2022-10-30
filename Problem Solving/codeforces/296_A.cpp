#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,arr[105],ck[1005],ct=0,ctd=0;

    memset(ck,0,sizeof(ck));

    cin>>n;

    for(int i=0; i<n; i++){
        cin>>arr[i];
        ck[arr[i]]++;
    }
    int m=0;
    for(int i=0; i<1005; i++){
        if(m<ck[i]){
            m=ck[i];
        }
    }
    for(int i=0; i<1005; i++){
        if(ck[i]>=1){
            ct++;
        }
    }
    if(((n-m)+1)>=m){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}
