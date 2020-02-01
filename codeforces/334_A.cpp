#include <iostream>
using namespace std;
int main()
{
    int a,b,c,d,e=1,f;
    cin>>a;
    f=1+a*a;
    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=a/2;j++)
        {
            cout<<e<<' '<<f-e<<endl;
            e++;
        }
    }
    return 0;
}
