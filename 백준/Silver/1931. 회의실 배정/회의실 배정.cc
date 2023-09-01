#include <bits/stdc++.h> 
using namespace std;

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin>>n;
	vector<pair<int,int>> v(n);
	int cnt=0;
	vector<pair<int,int>> ans;
	for(int i=0;i<n;i++){
		cin>>v[i].second>>v[i].first;
	}
	sort(v.begin(),v.end());
	ans.push_back(v[0]);
	for(int i=1;i<n;i++){
		if(v[i].second>=ans.back().first){
			ans.push_back(v[i]);
		}
	}
	cout<<ans.size();
	return 0;
}
