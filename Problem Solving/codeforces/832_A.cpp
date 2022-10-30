#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long n,k,a,b;

    cin>>n>>k;

    a=n/k;

    if(a & 1){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

    return 0;
}
