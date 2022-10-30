#include<bits/stdc++.h>
///#define mx 100000

using namespace std;
/**
int prime[mx];
vector<int>mprime;

void primes(){
    prime[0]=1;
    prime[1]=1;

    for(int i=4; i<mx; i+=2){
        prime[i]=1;
    }

    for(int i=3; i*i<mx; i+=2){
        for(int j=i+i; j<mx; j+=i){
            prime[j]=1;
        }
    }

    for(int i=0; i<mx; i++){
        if(prime[i]==0){
            mprime.push_back(i);
        }
    }
}

int main()
{
    int tc;

    ///primes();

    cin>>tc;

    while(tc--){
        int n;

        cin>>n;

        int arr[n+1];

        for(int i=0; i<n; i++){
            cin>>arr[i];
        }

        int cnto=0,cntp=0,ans=0;
        set<int>inprime;
        map<int,int>mp;

        for(int i=0; i<n; i++){
            if(arr[i]==1){
                cnto++;
            }
            else{
                for(int j=0; j<mprime.size(); j++){
                    if(arr[i]==mprime[j]){
                        cntp++;
                        inprime.insert(arr[i]);
                        mp[arr[i]]++;
                    }
                    else if(arr[i]<mprime[j]){
                        break;
                    }
                }
            }
        }

        int dum = n-1;
        for(int i=1; i<=(n-cnto-cntp); i++){
            ans+=dum;
            dum-=1;
        }

        for(auto i=inprime.begin(); i!=inprime.end(); i++){
            ///cout<<*i<<" "<<mp[*i]<<endl;
            if(mp[*i]>1){
                ans+=(mp[*i]-1);
            }
            if(*i == 2){
                ans+=cnto;
            }
        }

        cout<<ans<<endl;
    }

    return 0;
}

*/

int main()
{
    int tc;

    cin>>tc;

    while(tc--){
        int n;

        cin>>n;

        int arr[n+1];

        for(int i=0; i<n; i++){
            cin>>arr[i];
        }

        int cnt=0;
        vector<int>odd;

        for(int i=0; i<n; i++){
            if(arr[i]%2!=0){
                cnt++;
                odd.push_back(arr[i]);
            }
        }

        int dum = n-1,ans=0;
        for(int i=1; i<=(n-cnt); i++){
            ans+=dum;
            dum-=1;
        }

        for(int i=0; i<odd.size(); i++){
            for(int j=i+1; j<odd.size(); j++){
                if(__gcd(odd[i],odd[j])>1){
                    ans+=1;
                }
            }
        }

        cout<<ans<<endl;
    }

    return 0;
}
