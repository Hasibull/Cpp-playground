#include<bits/stdc++.h>

using namespace std;

int main()
{
    int tc;

//    int prime[30],ps = 0;
//
//    for(int i=2; i<100; i++){
//        int ck=1;
//        for(int j=2; j<i; j++){
//            if(i%j == 0){
//                ck=0;
//                break;
//            }
//        }
//        if(ck==1){
//            prime[ps]=i;
//            ps++;
//        }
//    }

    cin>>tc;

    while(tc--){
        int n;

        cin>>n;

        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(i==j){
                    cout<<"1"<<" ";
                }
                else{
                    cout<<"0"<<" ";
                }
            }
            cout<<endl;
        }

//        int check = 0, gprime = 0;
//
//        for(int i=0; i<ps; i++){
//            if(n==prime[i]){
//                check = 1;
//                break;
//            }
//            else if(prime[i]>n){
//                gprime = prime[i];
//            }
//        }
//
//        if(check == 1){
//            for(int i=0; i<n; i++){
//                for(int j=0; j<n; j++){
//                    cout<<"1"<<" ";
//                }
//                cout<<endl;
//            }
//        }
//        else{
//            int last = gprime - n;
//            int reck = 0;
//
//            for(int i=0; i<ps; i++){
//                if(last == prime[i]){
//                    reck = 1;
//                    break;
//                }
//            }
//
//        }
    }
}
