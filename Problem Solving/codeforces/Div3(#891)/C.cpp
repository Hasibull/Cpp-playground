#include<bits/stdc++.h>

using namespace std;

int main()
{
    int tc;

    cin>>tc;

    while(tc--) {
        int n, mx = -1e5, mn = 1e8;
        cin>>n;
        int bn = (n * (n - 1)) / 2;

        set<int>value;
        vector<int>values(bn);

        for(int i=0; i<bn; i++) {
            int val;
            cin>>val;
            value.insert(val);
            mn = min(mn, val);
            mx = max(mx, val);
            values[i] = val;
        }

        map<int, int>cnt;

        for(auto val: value) {
            cnt[val] = 0;
        }

        for(int i=0; i<bn; i++) {
            cnt[values[i]]++;
        }

        vector<int>arr(n);
        int i=0;
        for(auto val: value) {
            if(cnt[val] > (n - i - 1)) {
                int sm = 0;
                int temp = (n - i - 1);
                int ck = 0;
                while(temp--) {
                    sm += temp;
                    ck++;
                    if(sm >= (n - i - 1)) {
                        break;
                    }
                }
                while(ck--) {
                    arr[i] = val;
                    i++;
                }
            }
            else {
                arr[i] = val;
                i++;
            }
        }

        while(i < n) {
            arr[i] = mx;
            i++;
        }

        for(int j=0; j<arr.size(); j++) {
            cout<<arr[j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}