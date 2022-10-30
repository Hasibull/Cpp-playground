#include<bits/stdc++.h>

using namespace std;
int main()
{
    int a,b,c,d,deg;

    while(1){
        cin>>a>>b>>c>>d;
        deg=0;

        if(a==0 && b==0 && c==0 && d==0)
            break;

        deg=1080;

        if(a>b){
            deg+=(a-b)*9;
        }
        else{
            deg+=((a-b)+40)*9;
        }
        if(c>b){
            deg+=(c-b)*9;
        }
        else{
            deg+=((c-b)+40)*9;
        }
        if(c>d){
            deg+=(c-d)*9;
        }
        else{
            deg+=((c-d)+40)*9;
        }

        cout<<deg<<endl;
    }
}
