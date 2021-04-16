#include<bits/stdc++.h>

using namespace std;

int main()
{
    int tc;

    cin>>tc;

    while(tc--){
        int n,m;

        cin>>n>>m;

        double arr[n+2];

        for(int i=1; i<=n; i++){
            cin>>arr[i];
        }

        double ans=0.0,sum=0.0;

        for(int i=1; i<=n; i++){
            for(int j=i; j<=n; j++){
                sum += ((arr[j]/1.0)/(j/1.0));
            }
            ans += sum;
            sum = 0.0;
        }

        if(ans == (m/1.0)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}
