#include<bits/stdc++.h>

using namespace std;

int main()
{
    int l,r,x=0,ck=1,ck1=0;

    cin>>l>>r;

    for(int i=l; i<=r; i++){
        x=i;
        ck=1;
        int arr[10],j=0,ln=0;
        memset(arr,0,sizeof(arr));
        while(x!=0){
            arr[j]=x%10;
            x/=10;
            j++;
            ln=j;
        }
        for(int k=0; k<ln-1; k++){
            for(int n=k+1; n<ln; n++){
                if(arr[k]==arr[n]){
                    ck=0;
                    break;
                }
            }
            if(ck==0)
                break;
        }
        if(ck==1){
            cout<<i<<endl;
            ck1=1;
            break;
        }
    }
    if(ck1==0)
        cout<<"-1"<<endl;
    return 0;
}
