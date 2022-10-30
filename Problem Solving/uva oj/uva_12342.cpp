#include<bits/stdc++.h>

using namespace std;
int main()
{
    long int a,b,t,i,j,k,l;

    cin>>t;

    for(i=1; i<=t; i++){
        long int tax=0;
        cin>>a;
        j=0; k=0; l=0; b=0;
        j=a-180000;
        if(j>300000){
            tax+=3000;
            k=j-300000;
        }
        else{
            tax+=((j*10)/100);
        }

        /*if(k>400000){
            tax+=60000;
            l=k-400000;
        }
        else{
            tax+=((k*15)/100);
        }

        if(l>300000){
            tax+=75000;
            b=l-300000;
        }
        else{
            tax+=((l*20)/100);
        }

        if(b>0){
            tax+=((b*25)/100);
        }*/

        ///tax=ceil(((j*10)/100)+((k*15)/100)+((l*20)/100)+((b*25)/100));
        cout<<"Case "<<i<<": ";
        if(tax<2000 && a>180000)
            cout<<2000<<endl;
        else if(a<180000)
            cout<<0<<endl;
        else
            cout<<tax<<endl;
    }
    return 0;
}
