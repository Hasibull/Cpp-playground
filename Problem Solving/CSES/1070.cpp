#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    cin>>n;

    if(n==1){
        cout<<n<<endl;
    }
    else if(n==4){
        cout<<"2 4 1 3"<<endl;
    }
    else if(n==3 || n==2 || n<0){
        cout<<"NO SOLUTION"<<endl;
    }
    else{
        for(int i=((n%2==0)?n:n-1); i>1; i-=2){
            cout<<i<<" ";
        }
        for(int i=((n%2==0)?n-1:n); i>=1; i-=2){
            cout<<i<<" ";
        }
        cout<<endl;
    }

    return 0;
}
