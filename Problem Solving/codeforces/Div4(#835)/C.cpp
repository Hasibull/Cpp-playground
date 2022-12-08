#include<bits/stdc++.h>

using namespace std;

int main()
{
    int tc;

    cin>>tc;

    while(tc--) {
        int n;
        cin>>n;

        vector<int>arr(n+1),dumy(n);
        int mx = 0, nmx = 0;

        for(int i=0; i<n; i++) {
            cin>>arr[i];
            dumy[i] = arr[i];
        }

        sort(dumy.begin(), dumy.end());

        for(int i=0; i<n; i++) {
            if(arr[i] == dumy[n-1]) {
                cout<<dumy[n-1] - dumy[n-2]<<" ";
            }
            else {
                cout<<arr[i] - dumy[n-1]<<" ";
            }
        }
        cout<<endl;
    }

    return 0;
}