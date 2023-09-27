#include <bits/stdc++.h>
using namespace std;

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	stack<int> building;
	int n;
	cin>>n;
	long long cnt=0;
	for(int i=0;i<n;i++){
		int height;
		cin>>height;
		while(!building.empty()&&building.top()<=height){
			building.pop();
		}
		cnt+=building.size();
		building.push(height);
	}
	cout<<cnt;
	return 0;
}
