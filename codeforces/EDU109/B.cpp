#include<bits/stdc++.h>

using namespace std;

int main()
{
    int tc;

    cin>>tc;

    while(tc--){
        int n;

        cin>>n;

        int arr[n+3],ck=0;

        arr[0]=0;

        for(int i=1; i<=n; i++){
            cin>>arr[i];

            if(arr[i-1]>arr[i]){
                ck=1;
            }
        }

        if(ck==1){
            if(arr[1]==n && arr[n]==1){
                cout<<"3"<<endl;
            }
            else if(arr[1]==1){
                cout<<"1"<<endl;
            }
            else if(arr[n]==n){
                cout<<"1"<<endl;
            }
            else{
                cout<<"2"<<endl;
            }
        }
        else{
            cout<<"0"<<endl;
        }
    }

    return 0;
}
