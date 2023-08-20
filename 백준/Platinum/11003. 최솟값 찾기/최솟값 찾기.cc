#include <bits/stdc++.h> 
using namespace std;

typedef pair<int,int> node;
int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	int n,l;
	cin>>n>>l;
	deque <node> dq;
	for(int i=0;i<n;i++){
		int now;
		cin>>now;
		while(dq.size()&&dq.back().second>now){
			dq.pop_back();
		}
		dq.push_back(node(i,now));
		if(dq.front().first<=i-l){
			dq.pop_front();
		}
		cout<<dq.front().second<<" ";
	}
	return 0;
}
