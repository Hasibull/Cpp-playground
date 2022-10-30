#include<bits/stdc++.h>

using namespace std;

int main()
{
    int tc;

    cin>>tc;

    while(tc--){
        int n;

        cin>>n;

        int arr[n+1];

        for(int i=0; i<n; i++){
            cin>>arr[i];
        }

        for(int i=0; i<n; i++){
            while(arr[i]>n){
                arr[i]/=2;
            }
        }
        bool check[n+1];

        memset(check, false, sizeof(check));

        for(int i=0; i<n; i++){
            if(check[arr[i]]==false && arr[i]!=0){
                check[arr[i]]=true;
            }
            else{
                while(arr[i]>0){
                    arr[i]/=2;
                    if(check[arr[i]]==false && arr[i]!=0){
                        check[arr[i]]=true;
                        break;
                    }
                }
            }
        }

        int ck=0;

        for(int i=1; i<=n; i++){
            if(check[i]==false){
                cout<<"NO"<<endl;
                ck=1;
                break;
            }
        }
        if(ck==0){
            cout<<"YES"<<endl;
        }
    }
    return 0;
}