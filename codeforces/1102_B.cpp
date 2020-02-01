#include<bits/stdc++.h>

using namespace std;
int main()
{
    int a,k,n,arr[5005];

    cin>>n>>k;
    int arr1[n]={0};
    for(int i=0; i<n; i++){
        cin>>arr1[i];
        arr1[i]++;
    }
    int ck=1;
    for(int i=0; i<n; i++){
        if(arr1[i]>k){
            ck=0;
            break;
        }
    }
    if(ck==1) cout<<
}
