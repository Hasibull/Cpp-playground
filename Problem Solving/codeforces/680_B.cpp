#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,a,b=0,ck=0,arr[1005];
    memset(arr,0,sizeof(arr));

    cin>>n>>a;

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        if((a-i-2)>=0){
            if(arr[a-i-2]==1){
                b++;
            }
        }
        if((a+i-1)<n){
            if(arr[a+i]==1){
                b++;
            }
        }

        if(b==2){
            ck+=2;
        }
        else if(b==1 && (((a+i+1)>n) || ((a-i-2)<0))){
            ck++;
        }
        b=0;
    }
    if(arr[a-1]==1){
        cout<<++ck<<endl;
    }
    else{
        cout<<ck<<endl;
    }

    return 0;
}
