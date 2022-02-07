#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,b;

    cin>>a>>b;

    if(a>0 && b>0){
        cout<<(a/b)<<" "<<(a-((a/b)*b))<<endl;
    }
    else if(a>0 && b<0){
        cout<<(a/b)<<" "<<(a-((a/b)*b))<<endl;
    }
    else if(a<0 && b>0){
        if(a%b==0){
            cout<<(a/b)<<" "<<"0"<<endl;
        }
        else{
            cout<<(a/b)-1<<" "<<a+((1-(a/b))*b)<<endl;
        }
    }
    else if(a<0 && b<0){
        if(a%b==0){
            cout<<(a/b)<<" "<<"0"<<endl;
        }
        else{
            cout<<(a/b)+1<<" "<<a-((1+(a/b))*b)<<endl;
        }
    }
    
}