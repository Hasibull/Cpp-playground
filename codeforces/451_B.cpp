#include<bits/stdc++.h>

using namespace std;

int main()
{
    long int n,arr[100005],arr1[100005],arr2[100005],m,ps;

    cin>>n;

    for(int i=0; i<n; i++){
        cin>>arr[i];
        arr1[i]=arr[i];
    }
    int l=0,ct=0;
    m=arr[0],ps=0;
    for(int i=0; i<n-1; i++){
        if(arr[i]<arr[i+1] && ps==0){
            l=i+1;
        }
        else if(arr[i]>arr[i+1]){
            m=arr[i+1];
            ps=i+1;
        }
    }
    if(l>ps){
        l=0;
    }
    int j=0;
    for(int i=0; i<l; i++){
        arr2[j]=arr[i];
        j++;
    }
    for(int i=ps; i>=l; i--){
        arr2[j]=arr[i];
        j++;
    }
    for(int i=ps+1; i<n; i++){
        arr2[j]=arr[i];
        j++;
    }

    int ck=1;

    sort(arr1,arr1+n);

    for(int i=0; i<n; i++){
        if(arr1[i]==arr2[i]){
            ck=1;
        }
        else{
            ck=0;
            break;
        }
    }
    if(ck==1){
        cout<<"yes"<<endl;
        cout<<l+1<<" "<<ps+1<<endl;
    }
    else{
        cout<<"no"<<endl;
    }

    return 0;
}
