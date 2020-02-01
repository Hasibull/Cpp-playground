#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,arr[]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};

    cin>>n>>m;

    int sz=sizeof(arr)/sizeof(arr[0]);

    for(int i=0; i<sz; i++){
        if(arr[i]==n && arr[i+1]==m){
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}
