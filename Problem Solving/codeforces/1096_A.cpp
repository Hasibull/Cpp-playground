#include<iostream>

using namespace std;
int main()
{
    long int a,b,i,j,p,q,t,x,y;

    cin>>t;
    while(t--){
        x=0,p=0,q=0;
        cin>>a>>b;
        x=a;
        for(j=b; j>=a; j--){
            if(j%x==0){
                p=x;
                q=j;
                break;
            }
        }
        cout<<p<<" "<<q<<endl;
    }
    return 0;
}
