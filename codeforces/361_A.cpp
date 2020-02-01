#include<bits/stdc++.h>

using namespace std;

int main()
{
    int arr[101][101],n,k;

    cin>>n>>k;

    for(int j=0; j<n; j++){
        for(int i=0; i<n; i++){
            if(j==i){
                cout<<k<<" ";
            }
            else{
                cout<<"0"<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
