#include<iostream>

using namespace std;
int main()
{
    long int n,l,r,d,i,j,ck,m;

    cin>>n;

    for(i=1; i<=n; i++){
        ck=0;
        cin>>l>>r>>d;
        m=1;
        if(d<l){
            ck=d;
        }
        else if(d>r){
            ck=d;
        }
        else if(d>=l && d<=r){
            while(1){
                if((r+m)%d==0){
                    ck=r+m;
                    break;
                }
                m++;
            }
        }
        cout<<ck<<endl;
    }
    return 0;
}
