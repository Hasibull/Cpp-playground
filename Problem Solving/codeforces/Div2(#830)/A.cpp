#include<bits/stdc++.h>

using namespace std;

int chosePrime(int n) {
    int ck = 0;
    for(int i=n; i>=2; i--) {
        ck = 0;
        for(int j=2; j<=sqrt(i); j++) {
            if(i % j == 0) {
                ck = 1;
                break;
            }
        }
        if(ck == 0) 
            return i;
    }
}

int main()
{
    int tc;
    cin>>tc;

    while(tc--) {
        int n, ans = 1e9;
        cin>>n;
        vector<int>arr(n+1);
        
        for(int i=0; i<n; i++) {
            cin>>arr[i];
        }
        
        if(n == 1) {
            ans = 1;
        }
        else if(__gcd(arr[n-1],n) == 1) {
            ans = 1;
        }
        else {
            int mxPrime = chosePrime(n);
            if(mxPrime == n) {
                ans = min(ans, 3);
            }
            else if(mxPrime < n) {
                ans = min(ans, ((n-mxPrime+1) + 1));
            }
        }
        if(n >= 2) {
            int gd = __gcd(arr[0], arr[1]);
            if(gd == 1) {
                ans = 0;
            }
            for(int i=2; i<n; i++) {
                if(__gcd(arr[i], gd) == 1) {
                    ans = 0;
                    break;
                }
            }
        }
        ans = min(ans, (n-1+1));
        if(arr[0] == 1) {
            ans = 0;
        }

        cout<<ans<<endl;
    }

    return 0;
}