#include<bits/stdc++.h>

using namespace std;
int main()
{
    int n,i,j,m,t,arr[10009];

    while(scanf("%d",&n),n){
        for(i=0; i<n; i++){
            cin>>arr[i];
        }

        m=0;t=0;

        for(i=0; i<n; i++){
            t+=arr[i];

            if(t>m){
                m=t;
            }
            if(t<0){
                t=0;
            }
        }

        if(m>0){
            cout<<"The maximum winning streak is "<<m<<"."<<endl;
        }
        else{
            cout<<"Losing streak."<<endl;
        }
    }

    return 0;
}
