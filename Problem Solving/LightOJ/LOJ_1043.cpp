#include<bits/stdc++.h>

using namespace std;

int main()
{
    int tc, cs = 1;

    cin>>tc;

    while(cs <= tc) {
        double ab, bc, ac, ratio;

        cin>>ab>>bc>>ac>>ratio;

        double abc = ratio + 1;
        double ad = sqrt(ratio / abc) * ab;
        
        printf("Case %d: %.6lf\n",cs, ad);
        cs++;
    }

    return 0;
}