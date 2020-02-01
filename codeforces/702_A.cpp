#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,arr[100000],i,m=0,ck=0;

    cin>>n;
    memset(arr,0,sizeof(arr));
    for(i=0; i<n; i++){
        cin>>arr[i];
    }
    m=0;
    for(i=0; i<(n-1); i++){
        if(arr[i+1]>arr[i]){
            ck++;
        }
        else{
            m=max(m,ck);
            ck=0;
        }
    }
    m=max(m,ck);
    cout<<m+1<<endl;

    return 0;
}
