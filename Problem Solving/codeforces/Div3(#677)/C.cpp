#include<bits/stdc++.h>

using namespace std;

int main()
{
    int tc;

    cin>>tc;

    while(tc--) {
        int n;

        cin>>n;

        vector<int>arr(n+2);
        arr[0] = 1e9, arr[n+1] = 1e9;

        for(int i=1; i<=n; i++) {
            cin>>arr[i];
        }

        int answer = -1, track_max = -1;

        for(int i=1; i<=n; i++) {
            if(track_max <= arr[i] && (arr[i-1] < arr[i] || arr[i+1] < arr[i])) {
                track_max = arr[i];
                answer = i;
            }
        }
        if(answer != -1)
            cout<<answer<<endl;
        else
            cout<<"-1"<<endl;
    }
    return 0;
}