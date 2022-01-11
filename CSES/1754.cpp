#include<bits/stdc++.h>

using namespace std;

int main()
{
    int tc;

    cin>>tc;

    while(tc--){
        int a,b;

        cin>>a>>b;

        if(a%3==2 && b%3==2){
            cout<<"NO"<<endl;
        }
        else if(a%3==1 && b%3==1){
            cout<<"NO"<<endl;
        }
        else if(a%3==0 && b%3==0){
            if(a==b || a*2==b || b*2==a){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        else if((a%3==2 && b%3==0) || (a%3==0 && b%3==2)){
            if((a+3)==b || (b+3)==a || (a+2)==b || (b+2)==a){
                cout<<"YES"<<endl;
            }
            else if(a%2==1 && b%2==1){
                if((a+4)==b || (b+4)==a){
                    cout<<"YES"<<endl;
                }
                else{
                    cout<<"NO"<<endl;
                }
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        else if((a%3==1 && b%3==2) || (a%3==2 && b%3==1)){
            if((a+2)==b || (b+2)==a || (a*2)==b || (b*2)==a){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        else if((a%3==0 && b%3==1) || (a%3==1 && b%3==0)){
            cout<<"NO"<<endl;
        }
    }
    return 0;
}