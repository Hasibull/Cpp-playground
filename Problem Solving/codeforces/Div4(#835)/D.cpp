#include<bits/stdc++.h>

using namespace std;

int main()
{
    int tc;

    cin>>tc;

    while(tc--) {
        int n;
        cin>>n;

        vector<int>arr(n+1);

        for(int i=0; i<n; i++) {
            cin>>arr[i];
        }

        int ckd = -1, cku = -1, ck = 0;

        for(int i=0; i<n-2; i++) {
            if(arr[i] <= arr[i+1]) {
                ck = 1;
            }
            else {
                ck = 0;
                break;
            }
        }
        if(ck == 1) {
            cout<<"YES"<<endl;
            continue;
        }

        for(int i=0; i<n-2; i++) {
            if(arr[i] >= arr[i+1]) {
                ck = 1;
            }
            else {
                ck = 0;
                break;
            }
        }
        if(ck == 1) {
            cout<<"YES"<<endl;
            continue;
        }

        for(int i=1; i<n-1; i++) {
            if(arr[i-1] > arr[i] && arr[i] < arr[i+1] && ck == 0) {
                ck = 1;
            }
            if(arr[i-1] > arr[i] && arr[i] < arr[i+1] && ck == 1) {
                ck = 0;
                cout<<"WTF"<<endl;
                break;
            }
        }

        if(ck == 0) {
            cout<<"NO"<<endl;
        }
        else {
            cout<<"YES"<<endl;
        }
    }

    return 0;
}