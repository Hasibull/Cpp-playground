#include<bits/stdc++.h>

using namespace std;
int main()
{
    int l,i,j,ck=1,k,a[3333],b[3333],n;

    while(scanf("%d",&n)!=EOF)
    {
        ck=1;

        for(i=0; i<n; i++){
            cin>>a[i];
        }
        for(i=0; i<n-1; i++)
        {
            b[i]=abs(a[i+1]-a[i]);
        }

        sort(b,b+i);

        for(i=1; i<n; i++)
        {
            if(b[i]==b[i-1])
            {
                ck=0;
                break;
            }
        }
        if(ck==1)
        {
            cout<<"Jolly\n";
        }
        else
            cout<<"Not jolly\n";
    }
    return 0;
}
