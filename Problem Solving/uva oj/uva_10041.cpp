#include<bits/stdc++.h>

using namespace std;
int main()
{
    long int a,b,s[550],r,i,t;

    cin>>t;

    while(t--){

        long int sum=0;
        a=0;b=0;

        cin>>r;

        for(i=0; i<r; i++){
            cin>>s[i];
        }

        sort(s,s+r);

        a=s[r/2];

        for(i=0; i<r; i++){
            sum+=abs(a-s[i]);
        }
        cout<<sum<<endl;
    }
    return 0;
}
