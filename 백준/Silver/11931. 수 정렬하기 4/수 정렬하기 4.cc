#include <bits/stdc++.h>
using namespace std;

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin>>n;
	vector<int>v;
	for(int i=0;i<n;i++){
		int val;
		cin>>val;
		v.push_back(val);
	}
	sort(v.begin(),v.end(),greater<int>());
	for(int i:v){
		cout<<i<<"\n";
	}
	return 0;
}