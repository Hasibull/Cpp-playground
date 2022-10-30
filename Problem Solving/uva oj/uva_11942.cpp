#include<bits/stdc++.h>

using namespace std;
int main()
{
    int t,i,j,ck=0,a[30],ck1=0;

    cin>>t;

    cout<<"Lumberjacks:"<<endl;
    while(t--){
            ck=1; ck1=1;
        for(i=0; i<10; i++){
            cin>>a[i];
        }
        for(i=0; i<9; i++){
            if(a[i]>a[i+1]){
                ck=1;
            }
            else{
                ck=0;
                break;
            }
        }
        for(i=0; i<9; i++){
            if(a[i]<a[i+1]){
                ck1=1;
            }
            else{
                ck1=0;
                break;
            }
        }
        if(ck==1 || ck1==1)
            cout<<"Ordered"<<endl;

        else
            cout<<"Unordered"<<endl;
    }
    return 0;
}
