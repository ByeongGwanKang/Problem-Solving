#include <bits/stdc++.h> 
using namespace std;

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin>>n;
	int time=0;
	queue<pair<int,int>>q;
	vector<int>v(n);
	for(int i=0;i<n;i++){
		int val;
		cin>>val;
		q.push({i,val});
	}
	while(!q.empty()){
		time++;
		int idx=q.front().first;
		int pizza=q.front().second;
		pizza--;
		q.pop();
		if(pizza==0){
			v[idx]=time;
		}
		else{
			q.push({idx,pizza});
		}
	}
	for(int i=0;i<n;i++){
		cout<<v[i]<<" ";
	}
	return 0;
}
