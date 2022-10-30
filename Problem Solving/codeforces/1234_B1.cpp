#include<bits/stdc++.h>

using namespace std;

long int arr1[1000000];

int main()
{
    long int n,k,ck=1,val=0,d=0,ps=0,tl=0;

    cin>>n>>k;
    memset(arr1,0,sizeof(arr1));

    for(int i=0; i<n; i++){
        ck=1;val=0;
        cin>>val;

        for(int j=d; j<=tl; j++){
            if(val==arr1[j]){
                ck=0;
                break;
            }
        }
        if(ck==1){
            arr1[ps]=val;
            ps++;
            tl=ps;
            if(tl>k){
                d++;
            }
        }
    }
    cout<<tl-d<<endl;
    for(int i=tl-1; i>=d; i--){
        cout<<arr1[i]<<" ";
    }
    cout<<endl;

    return 0;
}
