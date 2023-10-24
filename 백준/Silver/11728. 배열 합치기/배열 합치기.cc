#include <bits/stdc++.h>
using namespace std;

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	int n,m;
	cin>>n>>m;
	vector<int>v(n+m);
	for(int i=0;i<n+m;i++){
		cin>>v[i];
	}
	sort(v.begin(),v.end());
	for(auto a:v){
		cout<<a<<" ";
	}
	return 0;
}
