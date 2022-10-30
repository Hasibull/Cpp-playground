#include<iostream>

using namespace std;
int main()
{
    long int a,s;

    cin>>a;

    s=(a*(a+1))/2;
    if(s%2==0) cout<<"0"<<endl;

    else cout<<"1"<<endl;

    return 0;

}
