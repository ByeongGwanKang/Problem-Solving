#include <bits/stdc++.h>
using namespace std;

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin>>n;
	int ans=0;
	//높이, 인덱스
	stack<pair<int,int>>h;
	for(int i=0;i<=n;i++){
		int val;
		if(i==n){
			val=0;
		}
		else{
			cin>>val;
		}
		int idx=i;
		while(!h.empty()&&h.top().first>=val){
			int temp=h.top().first;
			idx=h.top().second;
			ans=max(ans,temp*(i-idx));
			h.pop();
		}
		h.push({val,idx});
	}
	cout<<ans;
	return 0;
}