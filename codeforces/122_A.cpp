#include<bits/stdc++.h>

using namespace std;
int main()
{
    int n,i,ck=0,arr[14]={4,7,44,77,47,74,447,474,744,444,777,774,747,477};

    cin>>n;

    for(i=0; i<14; i++){
        if(n%arr[i]==0){
            ck=1;
            break;
        }
    }
    if(ck==1){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}
