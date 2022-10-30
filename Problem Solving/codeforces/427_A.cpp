#include<bits/stdc++.h>

using namespace std;

int  main()
{
    int n,a,ck=0,sum=0;

    cin>>n;

    for(int i=1; i<=n; i++){
        cin>>a;
        sum+=a;

        if(sum<0){
            ck++;
            sum=0;
        }
    }
    cout<<ck<<endl;
    return 0;
}
