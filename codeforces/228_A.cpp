#include<bits/stdc++.h>

using namespace std;
int main()
{
    int a[5],i,j,ck[5]={0};

    for(i=0; i<4; i++){
        cin>>a[i];
    }
    for(i=0; i<3; i++){
        for(j=(i+1); j<4; j++){
            if(a[i]==a[j])
                ck[i]++;
        }
    }
    int m=0;
    for(i=0; i<3; i++){
        if(ck[i]>0)
            m++;
    }
    cout<<m<<endl;
    return 0;
}
