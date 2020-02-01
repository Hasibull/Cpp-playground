#include<bits/stdc++.h>

using namespace std;
int main()
{
    int a,b,c,d,r,v;
    char ch,ch1;

    cin>>a>>ch>>b>>c>>ch1>>d;
    r=(a+c)/2;
    v=(b+d)/2;
    if(c>a && b==00 && d==00){
        v=30;
    }

    if(v<10 && r<10)
        cout<<"0"<<r<<":0"<<v<<endl;
    else if(r<10 && v>=10)
        cout<<"0"<<r<<":"<<v<<endl;
    else if(v<10 && r>=10)
        cout<<r<<":0"<<v<<endl;
    else
        cout<<r<<":"<<v<<endl;

    return 0;
}
