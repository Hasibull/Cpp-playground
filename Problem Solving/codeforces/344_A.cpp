#include<bits/stdc++.h>

using namespace std;

int main()
{
    int tc,arr[100005]={0},ck=0;

    cin>>tc;

    for(int i=1; i<=tc; i++){
        cin>>arr[i];

        if(arr[i]!=arr[i-1]){
            ck++;
        }
    }
    cout<<ck<<endl;
    return 0;
}
