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

        int gap = 0, answer = 0, ck = 0;

        for(int i=0; i<n; i++) {
            if(arr[i] == 1) {
                ck = 1;
                answer += gap;
                gap = 0;
            }
            if(ck == 1 && arr[i] == 0) {
                gap++;
            }
        }
        cout<<answer<<endl;
    }
    return 0;
}