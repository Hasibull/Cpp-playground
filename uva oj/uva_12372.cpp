#include<bits/stdc++.h>

using namespace std;
int main()
{
    int l,h,w,i,n;

    cin>>n;
    for(i=1; i<=n; i++){
        cin>>l>>h>>w;

        if(l>20 || h>20 || w>20){
            cout<<"Case "<<i<<": bad"<<endl;
        }
        else
            cout<<"Case "<<i<<": good"<<endl;
    }
    return 0;
}
