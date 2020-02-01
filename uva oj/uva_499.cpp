#include<bits/stdc++.h>

using namespace std;
int main()
{
    int i,j,l,arr[200],m=0;
    char ch[100000];

    while(gets(ch)){
        l=0;

        l=strlen(ch);
        memset(arr,0,sizeof(arr));

        for(i=0; i<l; i++){
            arr[ch[i]]++;
        }
        m=0;
        for(i=65; i<=122; i++){
            if(m<arr[i]){
                m=arr[i];
            }
        }

        for(i=65; i<=122; i++){
            if(arr[i]==m){
                printf("%c",i);
            }
        }

        printf(" %d\n",m);
    }
    return 0;
}
