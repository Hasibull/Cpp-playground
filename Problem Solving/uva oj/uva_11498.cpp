#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,q,x,y,i,j,k,l;

    while(scanf("%d",&q),q){
        cin>>n>>m;

        for(i=1; i<=q; i++){
            cin>>x>>y;

            if(x==n || y==m){
                cout<<"divisa"<<"\n";
            }
            else if(x>n && y>m){
                cout<<"NE"<<"\n";
            }
            else if(x>n && y<m){
                cout<<"SE"<<"\n";
            }
            else if(x<n && y>m){
                cout<<"NO"<<"\n";
            }
            else if(x<n && y<m){
                cout<<"SO"<<"\n";
            }
        }
    }
    return 0;
}
