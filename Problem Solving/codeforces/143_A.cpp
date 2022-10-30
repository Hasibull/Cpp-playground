#include<bits/stdc++.h>

using namespace std;

int main()
{
    int r1,r2,c1,c2,d1,d2,a,b,x,y;

    cin>>r1>>r2>>c1>>c2>>d1>>d2;

    y=(d2-r1+c1)/2;
    b=r2-y;
    x=(c2-b);
    a=r1-x;

    if(a<=0 || b<=0 || x<=0 || y<=0){
        cout<<"-1"<<endl;
    }
    else if(a==x || b==y || a==y || a==b || b==x || x==y){
        cout<<"-1"<<endl;
    }
    else if(a>9 || b>9 || x>9 || y>9){
        cout<<"-1"<<endl;
    }
    else if((a+b)!=d1 || (x+y)!=d2){
        cout<<"-1"<<endl;
    }
    else{
        cout<<a<<" "<<x<<endl;
        cout<<y<<" "<<b<<endl;
    }
    return 0;
}
