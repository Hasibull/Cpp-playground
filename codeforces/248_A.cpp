#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,ctl1=0,ctl0=0,ctr1=0,ctr0=0,l=0,r=0;

    cin>>n;

    for(int i=0; i<n; i++){
        cin>>l>>r;
        if(l==1){
            ctl1++;
        }
        else if(l==0){
            ctl0++;
        }
        if(r==1){
            ctr1++;
        }
        else if(r==0){
            ctr0++;
        }
        l=0;r=0;
    }
    if(ctl0==0){
        if(ctr1==0){
            cout<<"0"<<endl;
            return 0;
        }
        else if(ctr0==0){
            cout<<"0"<<endl;
            return 0;
        }
        else if(ctr1>=ctr0){
            cout<<n-ctr1<<endl;
            return 0;
        }
        else{
            cout<<n-ctr0<<endl;
            return 0;
        }
    }
    else if(ctl1==0){
        if(ctr0==0){
            cout<<"0"<<endl;
            return 0;
        }
        else if(ctr1==0){
            cout<<"0"<<endl;
            return 0;
        }
        else if(ctr1>=ctr0){
            cout<<n-ctr1<<endl;
            return 0;
        }
        else{
            cout<<n-ctr0<<endl;
            return 0;
        }
    }
    else{
        if(ctl1>=ctl0){
            if(ctr1>=ctr0){
                cout<<(n-ctl1)+(n-ctr1)<<endl;
            }
            else{
                cout<<(n-ctl1)+(n-ctr0)<<endl;
            }
        }
        else{
            if(ctr1>=ctr0){
                cout<<(n-ctl0)+(n-ctr1)<<endl;
            }
            else{
                cout<<(n-ctl0)+(n-ctr0)<<endl;
            }
        }
    }
    return 0;
}
