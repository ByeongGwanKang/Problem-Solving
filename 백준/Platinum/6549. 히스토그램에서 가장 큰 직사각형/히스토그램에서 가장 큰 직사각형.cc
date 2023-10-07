#include <bits/stdc++.h>
using namespace std;

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	while(true){
		int n;
		cin>>n;
		if(n==0){
			return 0;
		}
		long long ans=0;
		//높이, 인덱스
		stack<pair<long long,long long>>h;
		for(long long i=0;i<=n;i++){
			long long val;
			if(i==n){
				val=0;
			}
			else{
				cin>>val;
			}
			long long idx=i;
			while(!h.empty()&&h.top().first>=val){
				long long temp=h.top().first;
				idx=h.top().second;
				ans=max(ans,temp*(i-idx));
				h.pop();
			}
			h.push({val,idx});
		}
		cout<<ans<<"\n";
	}
	return 0;
}