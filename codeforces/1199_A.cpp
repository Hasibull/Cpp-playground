#include<bits/stdc++.h>

using namespace std;

int arr[1000000];
int main()
{
    int n,x,y,a,b,ck=0,i,j,k;

    cin>>n>>x>>y;

    for(i=0; i<n; i++){
        cin>>arr[i];
    }
    j=0;k=0;a=0;b=0;
    for(i=0; i<n; i++){
        ck=0;
        if(i-x>=0){
            a=(i-x);
        }
        else{
            a=0;
        }
        if(i+y<n){
            b=i+y+1;
        }
        else{
            b=n;
        }
        for(j=a; j<b; j++){
            if(arr[j]>=arr[i]){
                ck=1;
            }
            else{
                ck=0;
                break;
            }
        }
        if(ck==1){
            cout<<i+1<<endl;
            break;
        }
    }
    return 0;
}
