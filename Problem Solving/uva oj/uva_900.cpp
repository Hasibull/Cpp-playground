#include<iostream>

using namespace std;
int main()
{
    long long l,ans=0,a[55];

    a[0]=0;a[1]N=1;a[2]=2;

    for(int i=3; i<=50; i++){
        a[i]=a[i-1]+a[i-2];
    }

    while(1){
        cin>>l;

        if(l==0)
            break;

        cout<<a[l]<<endl;
    }
    return 0;
}
