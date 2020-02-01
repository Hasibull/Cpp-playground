#include<bits/stdc++.h>

using namespace std;
int main()
{
    int i,j,n,d,r,m[109],l[109],s=0;

    while(1){
        cin>>n>>d>>r;

        if(n==0 && d==0 && r==0)
            break;

        s=0;j=0;

        for(i=0; i<n; i++){
            cin>>m[i];
        }

        sort(m,m+n);

        for(i=0; i<n; i++){
            cin>>l[i];
        }

        sort(l,l+n,greater<int>());

        for(i=0; i<n; i++){
            s=0;
            s=m[i]+l[i];
            if(s>d)
                j+=(s-d)*r;
        }
        cout<<j<<endl;
    }
    return 0;
}
