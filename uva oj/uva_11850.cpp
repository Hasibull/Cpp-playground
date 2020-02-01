#include<bits/stdc++.h>

using namespace std;
int main()
{
    int i,j,n,dis[100009];

    while(1){
        cin>>n;

        if(n==0)
            break;

        int ck=1;

        for(i=0; i<n; i++){
            cin>>dis[i];
        }

        sort(dis,dis+n);

        for(i=0; i<n-1; i++){
            if(dis[i+1]-dis[i]>200){
                ck=0;
                break;
            }
            else if(2*(1422-dis[n-1])>200)
            {
                ck=0;
                break;
            }
            else{
                ck=1;
            }
        }
        if(ck==1)
            cout<<"POSSIBLE"<<endl;

        else
            cout<<"IMPOSSIBLE"<<endl;
    }
    return 0;
}
