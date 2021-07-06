#include<bits/stdc++.h>

using namespace std;

int main()
{
    double a,b,c;

    while(scanf("%lf %lf %lf",&a,&b,&c)!=EOF){
        double p=(a+b+c)/2;
        double pi=3.1415926535897;

        double v=sqrt(p*(p-a)*(p-b)*(p-c));
        double s=(a*b*c)/(sqrt((a+b+c)*(a+b-c)*(b+c-a)*(a+c-b)));
        double r=(double)(v/p);

        ///cout<<fixed<<setprecision(4)<<s<<" "<<v<<" "<<r<<endl;

        cout<<fixed<<setprecision(4)<<(pi*s*s)-v<<" "<<(v-(pi*r*r))<<" "<<(pi*r*r)<<endl;
    }
    return 0;
}
