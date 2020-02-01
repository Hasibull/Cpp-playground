#include<bits/stdc++.h>

using namespace std;

int main()
{
    long int t,b,p,f,h,c,i,j,k,m,n,ans=0,cp=0,cf=0;

    cin>>t;

    for(i=1; i<=t; i++){
        m=0;n=0;ans=0;cp=0;cf=0;
        cin>>b>>p>>f>>h>>c;

        if(c>=h){
            m=b/2;
            if(m>=f){
                cp=m-f;
                ans=f*c;
            }
            else{
                ans=m*c;
            }
            if(cp<=p)
                ans+=(cp*h);
            else
                ans+=(p*h);
        }
        else{
            m=b/2;
            if(m>=p){
                cp=m-p;
                ans=p*h;
            }
            else{
                ans=m*h;
            }
            if(cp<=f)
                ans+=(cp*c);
            else
                ans+=(f*c);
        }

        cout<<ans<<endl;
    }

    return 0;
}
