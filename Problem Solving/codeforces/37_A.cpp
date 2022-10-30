#include<iostream>

using namespace std;
int main()
{
    int i,j,k,n,m,ck[1001]={0};

    cin>>n;

    int a[n];
    for(i=0; i<n; i++){
        cin>>a[i];
        ck[a[i]]++;
    }
    m=0;k=0;
    for(i=0; i<1001; i++){
        if(m<ck[i]){
            m=ck[i];
        }
    }
    j=0;
    for(i=0; i<1001; i++){
        if(ck[i]>0){
            j++;
        }
    }
    cout<<m<<" "<<j<<endl;
    return 0;
}
