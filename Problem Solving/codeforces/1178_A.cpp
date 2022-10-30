#include<bits/stdc++.h>

using namespace std;

int main()
{
    long int n,arr[105],i,j,k,l=0,ck[101],sum=0;

    cin>>n;

    for(i=0; i<n; i++){
        cin>>arr[i];
    }

    for(i=0; i<n; i++){
        sum+=arr[i];
    }
    k=sum/2;
    if(arr[0]>k){
        cout<<"1"<<endl;
        cout<<"1"<<endl;
    }
    else{
        sum=arr[0];j=0;
        for(i=1; i<n; i++){
            if(arr[i]<=(arr[0]/2)){
                sum+=arr[i];
                if(sum>k){
                    ck[j]=i+1;
                    l++;
                    break;
                }
                else{
                    ck[j]=i+1;
                    l++;
                }
                j++;
            }
        }
        if(l>0){
            cout<<++l<<endl;
            cout<<"1 ";
            for(i=0; i<=j; i++){
                cout<<ck[i]<<" ";
            }
            cout<<endl;
        }
        else{
            cout<<"0"<<endl;
        }
    }

    return 0;
}
