#include<bits/stdc++.h>

using namespace std;

long int a[1000000],b[1000000];
int main()
{
    long int i,j,k,ck=0,n,m;

    cin>>n>>m;

    for(i=0; i<n; i++){
        cin>>a[i];
    }
    for(i=0; i<m; i++){
        cin>>b[i];
    }
    sort(a,a+n);
    ///sort(b,b+m);
    for(i=0; i<m; i++){
        ck=0;
        for(j=0; j<n; j++){
            if(a[j]<=b[i]){
                ck++;
            }
            else
                break;
        }
        cout<<ck<<" ";
    }

    cout<<endl;
    return 0;
}
