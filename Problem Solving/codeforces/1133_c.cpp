#include<bits/stdc++.h>

using namespace std;
int main()
{
    long int i,j,k=0,ck[100000]={0},n,a[100000];

    cin>>n;
    for(i=0; i<n; i++){
        cin>>a[i];
    }

    sort(a,a+n);

    for(i=0; i<(n-1); i++){
        for(j=i+1; j<n; j++){
            if(a[j]-a[i]<=5)
                ck[i]++;
        }
    }

    k=0;

    for(i=0; i<n; i++){
        if(k<=ck[i])
            k=ck[i];
    }
    cout<<k+1<<endl;
    return 0;
}
