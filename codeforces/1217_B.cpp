#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,n,x,d[105],h[105],ck=0;

    cin>>t;

    while(t--){
        cin>>n>>x;
        int cnt=0,ik=0,dif[105]={0};
        for(int i=0; i<n; i++){
            cin>>d[i]>>h[i];
        }
        int i=0;
        while(i!=n){
            dif[i]=d[i]-h[i];
            i++;
        }
        int m=0;
        for(i=0; i<n; i++){
            if(m<dif[i]){
                m=dif[i];
                ik=i;
            }
        }
        if(chk==1)
            cout<<cnt+1<<endl;
        else
            cout<<"-1"<<endl;
    }
    return 0;
}
