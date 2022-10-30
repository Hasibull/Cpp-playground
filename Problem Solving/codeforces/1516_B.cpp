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

        int ck=0;

        for(int i=0; i<n; i++){
            cin>>arr[i];

            ck^=arr[i];
        }

        if(ck==0){
            cout<<"Yes"<<endl;
        }
        else {
            int xr=0,cnt=0;

            for(int i=0; i<n; i++){
                xr^=arr[i];
                if(xr == ck){
                    cnt++;
                    xr=0;
                }
            }
            if(cnt>=3){
                cout<<"Yes"<<endl;
            }
            else{
                cout<<"No"<<endl;
            }
        }
    }

    return 0;
}
