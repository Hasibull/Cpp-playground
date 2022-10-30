#include <iostream>

using namespace std;

int a[1000000],b[1000000];

main() {
    int n,m;
    int i,j,c;
    while (cin >> n >> m) {
        if (n==0 && m==0) break;
        for (i=1;i<=n;i++)
            cin >> a[i];
        for (i=1;i<=m;i++)
            cin >> b[i];
        c = 0;
        i = j = 1;
        while (i<=n && j<=m) {
            while (j<=m && b[j]<a[i]) j++;
            if (j>m) break;
            if (a[i]==b[j]) {
                c++; j++;
            }
            i++;
        }
        cout << c << endl;
    }
}
