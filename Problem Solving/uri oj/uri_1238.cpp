#include<bits/stdc++.h>

using namespace std;
int main()
{
    int n,i,j,k,l,a,b;
    char ch[100],ch1[100];

    cin>>n;
    for(i=0; i<n; i++){
        a=0;l=0;k=0;
        cin>>ch>>ch1;
        l=strlen(ch);
        k=strlen(ch1);
        if(l>k){
            a=k;
            for(j=0; j<a; j++){
                cout<<ch[j]<<ch1[j];
            }
            for(j=a; j<l; j++){
                cout<<ch[j];
            }
        }
        else if(l==k){
            for(j=0; j<k; j++){
                cout<<ch[j]<<ch1[j];
            }
        }
        else{
            a=l;
            for(j=0; j<a; j++){
                cout<<ch[j]<<ch1[j];
            }
            for(j=a; j<k; j++){
                cout<<ch1[j];
            }
        }
        cout<<endl;
    }
    return 0;
}
