#include<bits/stdc++.h>

using namespace std;
int main()
{
    long int a,b,c,i,j,t,ck;

    cin>>t;

    for(i=1; i<=t; i++){
        cin>>a>>b>>c;

        cout<<"Case "<<i<<": ";
        if(a>=(b+c) || b>=(a+c) || c>=(a+b) || a<=0 || b<=0 || c<=0){
            cout<<"Invalid"<<endl;
        }
        else if(a==b && b==c){
            cout<<"Equilateral"<<endl;
        }
        else if(a==b || a==c || b==c){
            cout<<"Isosceles"<<endl;
        }
        else if(a!=b && b!=c && c!=a){
            cout<<"Scalene"<<endl;
        }
    }

    return 0;
}
