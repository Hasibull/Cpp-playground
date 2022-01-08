#include<bits/stdc++.h>

using namespace std;

int main()
{
    string ch;

    getline(cin,ch);

    vector<int>cnt(100);

    for(int i=0; i<ch.size(); i++){
        cnt[ch[i]]++;
    }

    string ans="",subAns1="",subAns2="";
    int ck=0,cnt1=0,cnt2=0;

    for(int i=65; i<=94; i++){
        if(cnt[i]%2==1 && cnt2==0){
            cnt2=1;
            for(int j=1; j<=cnt[i]; j++){
                subAns2+=(char)(i);
            }
        }
        else if(cnt[i]%2==1 && cnt2==1){
            ck=1;
            break;
        }
        else if(cnt[i]>1 && cnt[i]%2==0){
            for(int j=1; j<=cnt[i]/2; j++){
                ans+=(char)(i);
            }
        }
        else if(cnt[i]==1){
            subAns1+=(char)(i);
            cnt1++;
        }
        if(cnt1>1){
            ck=1;
            break;
        }
        else if(cnt1==1 && cnt2==1){
            ck=1;
            break;
        }
    }
    
    if(ck==1){
        cout<<"NO SOLUTION"<<endl;
    }
    else{
        cout<<ans;
        if(!subAns1.empty()){
            cout<<subAns1;
        }
        else if(!subAns2.empty()){
            cout<<subAns2;
        }
        reverse(ans.begin(),ans.end());
        cout<<ans<<endl;
    }

    return 0;
}