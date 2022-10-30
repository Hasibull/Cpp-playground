#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int n,tc,arr[55];

    arr[0]=0;arr[1]=1;

    for(int i=2; i<55; i++){
        arr[i]=arr[i-1]+arr[i-2];
    }
    cin>>tc;

    for(int i=1; i<=tc; i++){
        cin>>n;

        cout<<"Scenario #"<<i<<":"<<endl;

        cout<<arr[n+2]<<endl;
        cout<<endl;
    }
    return 0;
}
