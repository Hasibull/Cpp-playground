#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,k;
bool check(int x)
{
    int sum=0; int a=x;
    while (a>0)
    {
        sum+=a;
        a/=k;

        if (sum>=n)
            return 1;
    }
    if (sum<n)
        return 0;
    return 1;
}
int bs(int l,int h)
{
    int ans=-1;
    while(l<=h)
    {
        int mid=l+(h-l)/2;
        if (check(mid))
        {
            ans=mid;
            h=mid-1;
        }
        else
        {
            l=mid+1;
        }
    }
    return ans;
}
int main()
{
    cin>>n>>k;


    cout<<bs(1,n);

}
