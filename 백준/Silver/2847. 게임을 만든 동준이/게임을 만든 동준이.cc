#include <bits/stdc++.h>
using namespace std;

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin>>n;
	stack <int>s;
	int cnt=0;
	for(int i=0;i<n;i++){
		int val;
		cin>>val;
		s.push(val);
	}
	while(!s.empty()){
		int temp=s.top();
		s.pop();
		while(!s.empty()&&s.top()>=temp){
			s.top()--;
			cnt++;
		}
	}
	cout<<cnt;
	return 0;
}