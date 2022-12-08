#include<bits/stdc++.h>

using namespace std;

int main()
{
    int tc;
    cin>>tc;

    while(tc--) {
        int n, ans1 = 0, ck = 0;
        cin>>n;

        string ch;
        cin>>ch;
        cin.ignore();

        for(int i=1; i<n; i++) {
            if(ch[i] != ch[i-1]) {
                ck=1;
                break;
            }
        }
        if(ck == 1) {
            char chk = '0';
            int cd = 0;
            for(int i=1; i<n; i++) {
                if(ch[i-1] > ch[i] && cd == 0) {
                    cd = 1;
                    chk = ch[i];
                    ans1 += 1;
                }
                else if(ch[i] != chk && cd == 1) {
                    chk = ch[i];
                    ans1 += 1;
                }
            }
            cout<<ans1<<endl;
        }
        else {
            cout<<"0"<<endl;
        }
    }

    return 0;
}