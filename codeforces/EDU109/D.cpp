#include<bits/stdc++.h>

using namespace std;

vector<int>ps0;
vector<int>ps1;
int dp[5005][5005];

long int solve(int i, int j){
    if(dp[i][j]!=-1){
        return dp[i][j];
    }
    if(i>=ps1.size()){
        return 0;
    }
    if(j>=ps0.size()){
        return 1e9;
    }

    dp[i][j] = min(abs(ps1[i]-ps0[j])+solve(i+1,j+1), solve(i,j+1));

    return dp[i][j];
}

int main()
{
    int n;

    cin>>n;

    int arr[n+1];///,ans=0,arr2[n+1];

    for(int i=0; i<n; i++){
        cin>>arr[i];
        ///arr2[i]=arr[i];
        if(arr[i]==1){
            ps1.push_back(i);
        }
        else{
            ps0.push_back(i);
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            dp[i][j]=-1;
        }
    }

    cout<<solve(0,0)<<endl;

    /**

    trying naive approach but failed :(
    for(int i=0; i<n; i++){
        if(arr[i]==1){
            int l=0,r=0,lps=-1,rps=-1;

            for(int j=i-1; j>=0; j--){
                if(arr[j]==0){
                    l++;
                    lps=j;
                    break;
                }
                else{
                    l++;
                }
            }
            for(int j=i+1; j<n; j++){
                if(arr[j]==0){
                    r++;
                    rps=j;
                    break;
                }
                else{
                    r++;
                }
            }

            if(l==0 && r>0){
                ans+=r;
                arr[i+r]=2;
            }
            else if(r==0 && l>0){
                ans+=l;
                arr[i-l]=2;
            }
            else if(lps>=0 && rps<0){
                ans+=l;
                arr[i-l]=2;
            }
            else if(rps>=0 && lps<0){
                ans+=r;
                arr[i+r]=2;
            }
            else if(l<=r){
                arr[i-l]=2;
                ans+=l;
            }
            else{
                ans+=r;
                arr[i+r]=2;
            }
            ///cout<<"A="<<ans<<" "<<l<<" "<<r<<endl;
        }
    }

    int ans2=0;

    for(int i=n-1; i>=0; i--){
        if(arr2[i]==1){
            int l=0,r=0,lps=-1,rps=-1;

            for(int j=i-1; j>=0; j--){
                if(arr2[j]==0){
                    l++;
                    lps=j;
                    break;
                }
                else{
                    l++;
                }
            }
            for(int j=i+1; j<n; j++){
                if(arr2[j]==0){
                    r++;
                    rps=j;
                    break;
                }
                else{
                    r++;
                }
            }

            if(l==0 && r>0){
                ans2+=r;
                arr2[i+r]=2;
            }
            else if(r==0 && l>0){
                ans2+=l;
                arr2[i-l]=2;
            }
            else if(lps>=0 && rps<0){
                ans2+=l;
                arr2[i-l]=2;
            }
            else if(rps>=0 && lps<0){
                ans2+=r;
                arr2[i+r]=2;
            }
            else if(l<=r){
                arr2[i-l]=2;
                ans2+=l;
            }
            else{
                ans2+=r;
                arr2[i+r]=2;
            }
            ///cout<<"A="<<ans<<" "<<l<<" "<<r<<endl;
        }
    }

    cout<<min(ans,ans2)<<endl;

    */

    return 0;
}
