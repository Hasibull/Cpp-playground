#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,ck=0;

    cin>>a>>b;

    if(a>b){
        int temp=0;
        temp=a;
        a=b;
        b=temp;
    }

    for(int i=1; i<=a; i++){
        for(int j=5; (j-i)<=b; j+=5){
            if((j-i)>0){
                ck++;
            }
        }
    }
    cout<<ck<<endl;
    return 0;
}
