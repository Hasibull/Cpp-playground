#include<bits/stdc++.h>

using namespace std;
int main()
{
    int n,i,j,a,b,c;

    cin>>n;

    while(n--){
        cin>>a>>b>>c;

        if((a>=(b+c)) || (b>=(a+c)) || (c>=(a+b)) || a<=0 || b<=0 || c<=0){
            cout<<"Wrong!!"<<endl;
        }

        else{
            cout<<"OK"<<endl;
        }
    }

    return 0;
}
