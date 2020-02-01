#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,a,b,c,ck=0;

    cin>>n;

    for(int i=1; i<=n; i++){
        cin>>a>>b>>c;

        if((a==1 && b==1) || (b==1 && c==1) || (a==1 && c==1)){
            ck++;
        }
    }
    cout<<ck<<endl;

    return 0;
}
