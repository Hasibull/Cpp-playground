#include<iostream>

using namespace std;
int main()
{
    long long int w1,w2,h1,h2,ans;

    cin>>w1>>h1>>w2>>h2;

    ans=(w1+2)+(w2+2)+(h1+h2)+(h1+h2)+(w1-w2);

    cout<<ans<<endl;

    return 0;
}
