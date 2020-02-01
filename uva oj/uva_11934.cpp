#include<bits/stdc++.h>

using namespace std;

int main()
{
    long int a,b,c,d,l,ans,ck;

    while(1){
        cin>>a>>b>>c>>d>>l;

        if(a==0 && b==0 && c==0 && d==0 && l==0)
            break;
        ck=0;ans=0;
        for(int i=0; i<=l; i++){
            ans=a*(i*i)+b*i+c;

            if(ans%d==0)
                ck++;
        }
        cout<<ck<<endl;
    }
    return 0;
}
