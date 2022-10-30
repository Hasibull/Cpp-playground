#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long n;

    cin>>n;

    long long cnt=0,dum=n;;
    cout<<n<<" ";
    while(true){
        while(n!=1 && cnt<=(dum/2)){
            if(n%2==0){
                n/=2;
                cout<<n<<" ";
            }
            else{
                n=(n*3)+1;
                cout<<n<<" ";
            }
            cnt++;
        }
        cnt=0;
        if(n==1){
            cout<<endl;
            break;
        }
    }

    return 0;
}
