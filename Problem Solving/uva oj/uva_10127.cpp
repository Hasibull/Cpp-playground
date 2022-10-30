#include <iostream>
#include <cstdio>

using namespace std;
int main()
{
    int n,one,p;

    while(scanf("%d",&n)==1){
        one=0;
        p=0;
        do{
            p=(p*10+1)%n;
            one++;
        }
        while(p!=0);

        cout<<one<<endl;
    }
    return 0;
}
