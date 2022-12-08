#include<bits/stdc++.h>

using namespace std;

int main()
{
    int tc;

    cin>>tc;

    while(tc--) {
        int n;

        cin>>n;

        int stopping = n % 10;
        int answer = 10 * (stopping-1);
        int cnt = 1;

        for(int i=stopping; i<=n; i=(i*10)+stopping) {
            answer += cnt;
            cnt++;
        }

        cout<<answer<<endl;
    }
    return 0;
}