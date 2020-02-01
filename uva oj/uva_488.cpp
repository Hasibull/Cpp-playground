#include<iostream>

using namespace std;
int main()
{
    int i,j,k,l,a,b,n,ck,c;

    cin>>n;
    while(n--){
        cin>>a>>b;
        for(j=0; j<b; j++){
            ck=1;
            for(k=1; k<=a; k++){
                for(l=1; l<=k; l++){
                    cout<<ck;
                }
                ck++;
                cout<<endl;
            }
            c=a-1;
            for(k=1; k<a; k++){
                for(l=(a-1); l>=k; l--){
                    cout<<c;
                }
                c--;
                cout<<endl;
            }
            if(j!=(b-1))
                cout<<endl;
        }
        if(n)
            cout<<endl;
    }
    return 0;
}
