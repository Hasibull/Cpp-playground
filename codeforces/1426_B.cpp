#include<bits/stdc++.h>

using namespace std;

int main()
{
	int tc;

	cin>>tc;

	while(tc--){
		int n,m;

		cin>>n>>m;

		int a,b,c,d;
		int ck=0;

		for(int i=0; i<n; i++){
			cin>>a>>b>>c>>d;
			if(b==c){
				ck=1;
			}
		}
		
		if(m%2==1){
			cout<<"No"<<endl;
		}
		else if(ck==1){
			cout<<"Yes"<<endl;
		}
		else if(ck==0){
			cout<<"No"<<endl;
		}
	}
	return 0;
}
