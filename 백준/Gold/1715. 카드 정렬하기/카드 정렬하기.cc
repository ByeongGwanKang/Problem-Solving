#include <bits/stdc++.h>
using namespace std;

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	priority_queue<int,vector<int>,greater<int>> pq;
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int val;
		cin>>val;
		pq.push(val);
	}
	int ans=0;
	while(pq.size()!=1){
		int sum;
		int a,b;
		a=pq.top();
		pq.pop();
		b=pq.top();
		pq.pop();
		sum=a+b;
		ans+=sum;
		pq.push(sum);
	}
	cout<<ans;
    return 0;
}
