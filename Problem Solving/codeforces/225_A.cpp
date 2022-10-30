#include<bits/stdc++.h>

using namespace std;

int main()
{
    int top,bottom,n,a[105],b[105],ck=1;

    cin>>n;
    cin>>top;
    bottom=(7-top);
    for(int i=0; i<n; i++){
        cin>>a[i]>>b[i];
    }
    for(int i=0; i<n; i++){
        if(bottom==a[i] || bottom==b[i]){
            ck=0;
        }
        else if(top==a[i] || top==b[i]){
            ck=0;
        }
    }
    if(ck==0){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
    return 0;
}
