#include<bits/stdc++.h>

using namespace std;

int main()
{
    int tc;

    cin>>tc;

    while(tc--){
        int k;

        cin>>k;

        int remain = (100-k);

        if(remain%k==0){
            cout<<(1+(remain/k))<<endl;
        }
        else{
            int div=2;
            while(div<=10){
                if(k%div==0 && remain%div==0){
                    k/=div;
                    remain/=div;
                }
                else{
                    div++;
                }
            }

            cout<<(remain+k)<<endl;
        }
    }

    return 0;
}
