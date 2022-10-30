#include<bits/stdc++.h>

using namespace std;

int main()
{
    int tc;

    cin>>tc;

    while(tc--){
        double n;

        cin>>n;

        int arr[(int)n+1];
        int cnt=0,sum=0;

        for(int i=0; i<n; i++){
            cin>>arr[i];

            sum+=arr[i];
        }

        double avg = sum/n;

        for(int i=0; i<n; i++){
            if(arr[i]>avg){
                cnt++;
            }
        }

        cout<<fixed<<setprecision(3)<<((100*cnt)/n)<<"%"<<endl;
    }

    return 0;
}
