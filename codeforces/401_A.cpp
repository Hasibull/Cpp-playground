#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,k,sum=0;

    cin>>n>>k;

    for(int i=0; i<n; i++){
        int val;

        cin>>val;
        sum+=val;
    }
    if(sum==0){
        cout<<"0"<<endl;
    }
    else if(sum>0){
        if(sum%k==0){
            cout<<sum/k<<endl;
        }
        else{
            cout<<(sum/k)+1<<endl;
        }
    }
    else{
        if(sum%k==0){
            cout<<-(sum/k)<<endl;
        }
        else{
            cout<<(-(sum/k))+1<<endl;
        }
    }
    return 0;
}
