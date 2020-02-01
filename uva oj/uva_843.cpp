#include<bits/stdc++.h>

using namespace std;

int main()
{
    int no,de,re=0;

    while(cin>>no>>de){
        cout<<"[";

        cout<<no/de<<";";

        while(de!=1){
            re=no-((no/de)*de);

            no=de;
            de=re;
            if(de!=1)
                cout<<no/de<<",";
        }
        cout<<no/de<<"]"<<endl;
    }
    return 0;
}
