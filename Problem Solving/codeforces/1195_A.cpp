#include<bits/stdc++.h>

using namespace std;
int main()
{
    int n,k,i,j=0,l=0,arr[1009],ck[1009],sum=0,ans=0,ans1=0;

    cin>>n>>k;
    memset(ck,0,sizeof(ck));
    if(n%2==0)
        l=n/2;
    else
        l=(n/2)+1;

    for(i=0; i<n; i++){
        cin>>arr[i];
        ck[arr[i]]++;
    }

    for(i=0; i<1009; i++){
        if(ck[i]!=0){
            sum+=(ck[i]/2);
            if(ck[i]%2!=0){
                j++;
            }
        }
    }
    if(l>=sum){
        ans=l-sum;
        ans1=j-ans;
    }
    else{
        ans=sum-l;
        ans1=j+(ans*2);
    }
    cout<<n-ans1<<endl;

    return 0;
}

