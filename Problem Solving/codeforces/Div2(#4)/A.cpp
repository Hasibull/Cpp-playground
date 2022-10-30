#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    cin>>n;

    /**
    if(n%2==0 && n!=2){
        cout<<"YES"<<endl;
    }
    else {
        cout<<"NO"<<endl;
    }
    */

    cout<<(((n & 1) || n==2) ? "NO" : "YES")<<endl;

    return 0;
}
