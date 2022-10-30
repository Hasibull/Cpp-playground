#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t,i=0;
    double d,v,u;

    cin>>t;
    while(t--){
        cin>>d>>v>>u;

        double t1=d/u;
        double t2=d/sqrt(u*u-v*v);

        double ck=t2-t1;
        if(v >= u || t1 == t2) {
            printf("Case %d: can't determine\n",++i);
            continue;
        }
        printf("Case %d: %.3f\n",++i,ck);
    }
    return 0;
}

