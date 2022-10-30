#include<bits/stdc++.h>

using namespace std;
int main()
{
    long int i,j=1,av,ans,n,h[100];

    while(1){
        cin>>n;
        av=0;
        if(n==0)
            break;

        for(i=0; i<n; i++){
            cin>>h[i];
            av+=h[i];
        }
        av/=n;
        int ck=0;
        cout<<"Set #"<<j<<endl;
        for(i=0; i<n; i++){
            if(h[i]>av){
                ck+=h[i]-av;
            }
        }
        cout<<"The minimum number of moves is "<<ck<<".\n"<<endl;
        j++;
    }
    return 0;
}
