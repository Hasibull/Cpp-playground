#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,ck,bit[105],ans=0,u=0,ck0=0,ck1=0;

    cin>>n;

    memset(bit,0,sizeof(bit));

    for(i=0; i<n; i++)
    {
        cin>>bit[i];
        if(bit[i]==1)
        {
            ck1++;
        }
    }
    ck=0;
    int noz,noo;
    int mx=0;
    int dif=0;
    for(int i=0; i<n; i++)
    {
        noz=noo=0;
        for(int j=i; j<n; j++)
        {
            if(bit[j]==0)
                noz++;
            if(bit[j]==1)
                noo++;

            dif=noz-noo;
            if(dif>mx)
            {
                mx=dif;
            }
        }
    }
    ck1+=mx;
    if(mx==0)
        ck1--;

    cout<<ck1<<endl;

    return 0;
}

