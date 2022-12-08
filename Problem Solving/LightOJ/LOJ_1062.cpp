#include<bits/stdc++.h>

using namespace std;

double calculateHeight(double a, double b) {
    return sqrt((b*b) - (a*a));
}

int main()
{
    int tc, cs = 1;

    cin>>tc;

    while(cs <= tc) {
        double x, y, c;

        cin>>x>>y>>c;

        double dw = 0, lw = 0, hg = min(x, y), w = (lw + hg) / 2;

        while(abs(c - dw) >= 0.000001) {
            double p = calculateHeight(w, x);
            double q = calculateHeight(w, y);

            dw = 1.0 / ((1.0 / p) + (1.0 / q));

            if(abs(c - dw) <= 0.000001) {
                break;
            }
            if(dw > c) {
                lw = w;
            }
            else {
                hg = w;
            }
            w = (lw + hg) / 2;
        }
        printf("Case %d: %.6lf\n",cs, w);
        cs++;
    }

    return 0;
}