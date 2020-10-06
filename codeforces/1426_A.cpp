#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	int tc;

	cin>>tc;

	while(tc--){
		int n,x;

		cin>>n>>x;
		
		int ans=1;
		
		if(n<=2){
			ans=1;	
		}
		else{
			n-=2;
			if(n%x==0){
				ans+=(n/x);
			}
			else{
				ans+=((n/x)+1);
			}
		}

		
		cout<<ans<<endl;

	}
	return 0;
} 
