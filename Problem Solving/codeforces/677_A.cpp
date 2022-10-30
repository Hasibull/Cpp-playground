#include<bits/stdc++.h>

using namespace std;
int main()
{
    int n,h,arr[1009],i,j,sum=0;

    cin>>n>>h;

    for(i=0; i<n; i++){
        cin>>arr[i];
        if(arr[i]>h){
            sum+=2;
        }
        else{
            sum+=1;
        }
    }

    cout<<sum<<endl;

    return 0;
}
