#include<iostream>
#include<cstring>
#include<cstdio>

using namespace std;
int main()
{
    int n,i,j,k,l,a,b,c,d,e,f,g,h;
    char ch[10005];

    cin>>n;
    getchar();
    for(i=1; i<=n; i++){
        scanf("%[^\n]",ch);
        getchar();
        int sum=0,sum1=0;
        a=0;b=0;c=0;d=0;e=0;f=0;g=0;h=0;
        a=(ch[0]-48)*2;
        b=(ch[2]-48)*2;
        c=(ch[5]-48)*2;
        d=(ch[7]-48)*2;
        e=(ch[10]-48)*2;
        f=(ch[12]-48)*2;
        g=(ch[15]-48)*2;
        h=(ch[17]-48)*2;
        sum1+=(ch[1]-48);sum1+=(ch[3]-48);sum1+=(ch[6]-48);sum1+=(ch[8]-48);
        sum1+=(ch[11]-48);sum1+=(ch[13]-48);sum1+=(ch[16]-48);sum1+=(ch[18]-48);
        while(a!=0){
            sum+=(a%10);
            a/=10;
        }
        while(b!=0){
            sum+=(b%10);
            b/=10;
        }
        while(c!=0){
            sum+=(c%10);
            c/=10;
        }
        while(d!=0){
            sum+=(d%10);
            d/=10;
        }
        while(e!=0){
            sum+=(e%10);
            e/=10;
        }
        while(f!=0){
            sum+=(f%10);
            f/=10;
        }
        while(g!=0){
            sum+=(g%10);
            g/=10;
        }
        while(h!=0){
            sum+=(h%10);
            h/=10;
        }
        if((sum+sum1)%10==0){
            cout<<"Valid\n";
        }
        else{
            cout<<"Invalid\n";
        }
    }
    return 0;
}
