#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,n=0;

    cin>>a>>b;

    n=min(a,b);

    if(n%2==0){
        cout<<"Malvika"<<endl;
    }
    else{
        cout<<"Akshat"<<endl;
    }
    return 0;
}
