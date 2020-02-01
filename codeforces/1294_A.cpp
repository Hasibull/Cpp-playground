#include<bits/stdc++.h>

using namespace std;

int main()
{
    int tc;

    cin>>tc;

    while(tc--){
        long long a,b,c,n;

        cin>>a>>b>>c>>n;

        long long sum=a+b+c+n;

        long long mn=max(a,max(b,c));

        if(sum%3==0 && (sum/3)>=mn)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
