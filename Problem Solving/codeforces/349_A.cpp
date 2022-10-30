#include<bits/stdc++.h>

using namespace std;

int main()
{
    int arr[100000],sum=0,n;

    cin>>n;

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int ck=1;
    if(arr[0]>25){
        cout<<"NO"<<endl;
    }
    else{
        sum+=arr[0];
        for(int i=1; i<n; i++){
            if(sum<arr[i]){
                cout<<"NO"<<endl;
                ck=0;
                break;
            }
            else{
                sum+=25;
            }
        }
        if(ck==1)
            cout<<"YES"<<endl;
    }

    return 0;

}
