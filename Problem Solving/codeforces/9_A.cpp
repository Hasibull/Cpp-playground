#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,b;

    cin>>a>>b;

    int pb=6-max(a,b)+1;

    int v2=6;

    if(v2%pb==0){
        cout<<"1/"<<v2/pb<<endl;
    }
    else if(pb%2==0){
        cout<<pb/2<<"/"<<v2/2<<endl;
    }
    else{
        cout<<pb<<"/"<<v2<<endl;
    }
    return 0;
}
