#include<bits/stdc++.h>

using namespace std;

int gcd(int a,int b){
    if(b==a){
        return a;
    }
    else if(b==1){
        return 1;
    }
    else if(a%b==0){
        return b;
    }
    return gcd(b,a%b);
}

int main()
{
    int tc;

    cin>>tc;

    while(tc--){
        int a,b;

        cin>>a>>b;

        cout<<gcd(max(a,b),min(a,b))<<endl;
    }

    return 0;
}
