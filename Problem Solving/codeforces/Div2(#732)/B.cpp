#include<bits/stdc++.h>

using namespace std;

int main()
{
    int tc;

    cin>>tc;

    while(tc--){
        int n, m;

        cin >> n >> m;

        vector<int>sums(m, 0);

        for (int i = 0; i < n; i++) {
            char ch;

            for (int j = 0; j < m; j++) {
                cin >> ch;
                sums[j] += ch;
            }
        }

        for (int i = 0; i < n - 1; i++) {
            char ch;

            for (int j = 0; j < m; j++) {
                cin >> ch;
                sums[j] -= ch;
            }
        }

        for (int i = 0; i < m; i++) {
            cout << char(sums[i]);
        }
        cout << endl;
    }

    return 0;
}
