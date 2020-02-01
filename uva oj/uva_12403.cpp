#include<bits/stdc++.h>

using namespace std;
int main()
{
    long int n,sum=0,t;
    char ch[30];

    cin>>t;
    getchar();

    while(t--){
        scanf("%s",ch);
        getchar();

        if(strcmp(ch,"donate")==0){
            scanf("%ld",&n);
            getchar();
            sum+=n;
        }
        else if(strcmp(ch,"report")==0){
            cout<<sum<<endl;
        }
    }

    return 0;
}
