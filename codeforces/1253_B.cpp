#include<bits/stdc++.h>

#define max_n 1e5+5

using namespace std;

int arr[1000000];

const int a=1,b=2;

int main()
{
    int num,sum=0,n,ck=0,val=0,ck2=1;

    memset(arr,0,sizeof(arr));

    cin>>n;

    int j=0;

    for(int i=1; i<=n; i++){
        cin>>num;

        sum+=num;

        if(arr[num]==0){
            arr[num]=1;
        }
        else if(arr[num]==1){
            cout<<i<<endl;
            cout<<"-1"<<endl;
            break;
        }

        if(sum<0){
            cout<<"-1"<<endl;
            break;
        }
        else if(sum==0 && ck==0){
            ck=1;
            val=i;
            memset(arr,0,sizeof(arr));
        }
        else if(sum==0 && ck!=0){
            memset(arr,0,sizeof(arr));
        }
    }
    if(val==n){
        cout<<"1"<<endl;
        cout<<n<<endl;
    }
    else if(val>0 && val<n){
        cout<<"2"<<endl;
        cout<<val<<" "<<n-val<<endl;
    }
    return 0;
}
