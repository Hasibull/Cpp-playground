#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,del,a,b;

    cin>>n>>m;
    if(n==0 && m==0){
        cout<<n<<" "<<n<<endl;
    }
    else if(n<=0 && m>0){
        cout<<"Impossible"<<endl;
    }
    else if(m==0 && n>0){
        cout<<n<<" "<<n<<endl;
    }
    else{
        a=m-n;

        if(a<=0){
            cout<<n<<" "<<n+(m-1)<<endl;
        }
        else{
            cout<<n+a<<" "<<n+(m-1)<<endl;
        }
    }
    return 0;
}
