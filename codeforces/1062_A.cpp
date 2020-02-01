#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,j,arr[105],ck=0;

    cin>>n;

    for(i=0; i<n; i++){
        cin>>arr[i];
    }
    if((arr[0]-1)==0 && arr[1]==2){
        ck++;
    }
    for(i=1; i<n; i++){
        if((arr[i]==(arr[i-1]+1)) && (arr[i]==(arr[i+1]-1))){
            ck++;
        }
    }

    cout<<ck<<endl;

    return 0;
}
