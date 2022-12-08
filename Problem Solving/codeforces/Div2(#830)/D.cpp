#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int tc;
    cin>>tc;
    // cin.ignore();
    char cmd[tc + 2];
    long long arr[tc + 2];
    // set<long long>mex;
    // cin.ignore();

    unordered_map<long long, long long>ck,previous;

    for(int i=0; i<tc; i++) {
        cin>>cmd[i]>>arr[i];
        if(cmd[i] == '?') {
            previous[arr[i]] = arr[i];
        }
    }

    for(int i=0; i<tc; i++) {
        if(cmd[i] == '?') {
            long long a = previous[arr[i]];
            while(ck[a] == 1) {
                a += arr[i];
            }
            previous[arr[i]] = a;
            cout<<a<<"\n";
        }
        else {
            ck[arr[i]] = 1;
        }
    }

    // while(tc--) {
        // string cmd;
        // getline(cin, cmd);
        // // cin.ignore();
        // stringstream ss;
        // string value = "";

        // for(int i=0; i<cmd.size(); i++) {
        //     if(cmd[i] >= '0' && cmd[i]<='9') {
        //         value += cmd[i];
        //     }
        // }
        // ss<<value;
        // long long num = 0;
        // ss>>num;

        // if(cmd[0] == '+') {
        //     mex.insert(num);
            
        // }
        // else if(cmd[0] == '?') {
        //     long long val = num;
        //     while(true) {
        //         if(mex.find(val) == mex.end()) {
        //             cout<<val<<endl;
        //             break;
        //         }
        //         val += num;
        //     }
        //     // for(long long i=num; i<=1e18; i+=num) {
        //     //     if(mex.find(i) == mex.end()) {
        //     //         cout<<i<<endl;
        //     //         break;
        //     //     }
        //     // }
        // }
    // }
    // for(auto& val: mex) {
    //     cout<<val<<" ";
    // }
    // cout<<endl;
    return 0;
}