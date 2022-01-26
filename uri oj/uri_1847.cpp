#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,c;

    cin>>a>>b>>c;

    if(b<a && c>=b){
        cout<<":)"<<endl;
    }
    else if(b>a && c<=b){
        cout<<":("<<endl;
    }
    else if(c>b && b>a && (c-b)<(b-a)){
        cout<<":("<<endl;
    }
    else if(c>b && b>a && (c-b)>=(b-a)){
        cout<<":)"<<endl;
    }
    else if(a>b && b>c && (b-c)<(a-b)){
        cout<<":)"<<endl;
    }
    else if(a>b && b>c && (b-c)>=(a-b)){
        cout<<":("<<endl;
    }
    else if(a==b && c>b){
        cout<<":)"<<endl;
    }
    else{
        cout<<":("<<endl;
    }

    return 0;
}