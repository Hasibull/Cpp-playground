#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,k,ck=1,val=0;
    queue<int> data;

    cin>>n>>k;

    set<int>vals;

    for(int i=0; i<n; i++){
        ck=1;val=0;
        cin>>val;

        if (!vals.count(val)) {
			if (int(data.size()) >= k) {
				int cur = data.front();
				data.pop();
				vals.erase(cur);
			}
			vals.insert(val);
			data.push(val);
		}
    }

    stack<int>st;

    cout<<data.size()<<endl;
    while(!data.empty()){
        st.push(data.front());
        data.pop();
    }

    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;

    return 0;
}

