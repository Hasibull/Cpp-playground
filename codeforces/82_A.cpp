#include<bits/stdc++.h>

using namespace std;
int main()
{
    int a,v,c=0;
    string str[5]= {"Sheldon","Leonard","Penny","Rajesh","Howard"};

    cin>>a;

    v=1;
    while(v*5<a){
        a-=(v*5);
        v*=2;
    }
    c=(a-1)/v;

    cout<<str[c]<<endl;
    return 0;
}
