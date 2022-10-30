#include<bits/stdc++.h>

using namespace std;

int main()
{
    int d,h;

    cin>>d>>h;

    int mnSum = 0,mxSum = 0,mn[d+1],mx[d+1];

    for(int i=0; i<d; i++){
        int a,b;

        cin>>a>>b;
        mn[i]=a;
        mx[i]=b;

        mnSum += a;
        mxSum += b;
    }

    if(h>=mnSum && h<=mxSum){
        cout<<"YES"<<endl;

        int totalExtra = h-mnSum;

        for(int i=0; i<d; i++){
            if(totalExtra > 0){
                int extra = min(totalExtra, (mx[i]-mn[i]));

                totalExtra-=extra;
                cout<<mn[i]+extra<<" ";
            }
            else{
                cout<<mn[i]<<" ";
            }
        }
        cout<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

    return 0;
}
