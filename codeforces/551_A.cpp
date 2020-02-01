#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,a[2001],ps[2001],val[2001];

    cin>>n;
    memset(ps,0,sizeof(ps));

    for(int i=0; i<n; i++){
        cin>>a[i];
        ps[a[i]]++;
    }

    memset(val,0,sizeof(val));

    int e=1;

    for(int i=2000; i>=0; i--){
        if(ps[i]>0){
            val[i]=e;
            e+=ps[i];
        }
    }

    for(int i=0; i<n; i++){
        cout<<val[a[i]]<<" ";
    }
    cout<<endl;

    return 0;
}
