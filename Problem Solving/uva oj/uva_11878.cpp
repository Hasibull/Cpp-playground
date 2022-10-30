#include<bits/stdc++.h>

using namespace std;
int main()
{
    int a,b,c,sum=0,ck=0;
    char ch,ch1[1000];

    while(scanf("%d%c%d=%s",&a,&ch,&b,ch1)==4){
        sum=0;
        if(ch=='+'){
            sum=a+b;
        }
        else{
            sum=a-b;
        }

        if(sum==atoi(ch1)){
            ck++;
        }
    }
    cout<<ck<<endl;
    return 0;
}
