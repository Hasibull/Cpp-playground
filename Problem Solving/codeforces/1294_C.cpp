#include<bits/stdc++.h>

using namespace std;

int main()
{
    int tc;

    cin>>tc;

    while(tc--){
        int n;

        cin>>n;

        int a=0,b=0,c=0,ck=0,md=0;

        for(int i=2; i<=sqrt(n); i++){
            if(n%i==0){
                a=i;
                break;
            }
        }
        if(a==0){
            cout<<"NO"<<endl;
        }
        else{
            n/=a;
            for(int i=2; i<=sqrt(n); i++){
                if(n%i==0 && i!=a){
                    b=i;
                    break;
                }
            }
            if(b==0){
                cout<<"NO"<<endl;
            }
            else{
                c=(n/b);

                if(a==b || a==c || b==c){
                    cout<<"NO"<<endl;
                }
                else{
                    cout<<"YES"<<endl;
                    cout<<a<<" "<<b<<" "<<c<<endl;
                }
            }
        }
    }
    return 0;
}
