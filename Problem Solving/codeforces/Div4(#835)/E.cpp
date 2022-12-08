#include<bits/stdc++.h>

using namespace std;

int main()
{
    int tc;

    cin>>tc;

    while(tc--) {
        int n;
        cin>>n;

        vector<int>arr(n+1),darr(n+1);
        int nz = 0, no = 0;

        for(int i=0; i<n; i++) {
            cin>>arr[i];
            darr[i] = arr[i];
            // if(arr[i] == 0) {
            //     no++;
            // }
            // else {
            //     nz++;
            // }
        }
        // if(nz == n || no == n) {
        //     cout<<n-1<<endl;
        // }
        // else {
            
        // }
        long long int ans = 0, n1 = 0;

        for(int i=0; i<n; i++) {
            if(arr[i] == 1) {
                n1++;
            }
            else {
                ans += n1;
            }
        }
        // for(int i=0; i<n; i++) {
        //     if(arr[i] == arr[n-i-1] && arr[i] == 0) {
        //         arr[i] = 1;
        //         break;
        //     }
        //     else if(arr[i] == arr[n-i-1] && arr[i] == 1) {
        //         arr[n-i-1] = 0;
        //         break;
        //     }
        //     else if(arr[i] == 0 && arr[n-i-1] == 1) {
        //         if(nz > no) {
        //             arr[i] = 1;
        //         }
        //         else {
        //             arr[n-i-1] = 0;
        //         }
        //         break;
        //     }
        // }
        for(int i=0; i<n; i++) {
            if(darr[i] == 0) {
                darr[i] = 1;
                break;
            }
        }

        long long int dans1 = 0, dans2 = 0;
        n1 = 0;
        for(int i=0; i<n; i++) {
            if(darr[i] == 1) {
                n1++;
            }
            else {
                dans1 += n1;
            }
        }

        for(int i=n-1; i>=0; i--) {
            if(arr[i] == 1) {
                arr[i] = 0;
                break;
            }
        }

        n1 = 0;
        for(int i=0; i<n; i++) {
            if(arr[i] == 1) {
                n1++;
            }
            else {
                dans2 += n1;
            }
        }

        cout<<max(ans, max(dans1, dans2))<<endl;
    }

    return 0;
}