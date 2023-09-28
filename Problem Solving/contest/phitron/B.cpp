#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    cin >> n;

    int nth = (n - 1) / 2;

    int upTree = nth + 6;

    int tree = (2 * upTree) - 1;
    // cout<<nth<<" "<<tree<<endl;
    int space = 1;

    for(int i=0; i<=tree; i+=2) {
        for(int j=space; j<upTree; j++) {
            cout<<" ";
        }
        for(int j=0; j<=i; j++) {
            cout<<"*";
        }
        cout<<endl;
        space++;
    }

    for(int i=0; i<5; i++) {
        for(int j=0; j<(upTree - nth -1); j++) {
            cout<<" ";
        }
        for(int j=0; j<n; j++) {
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}