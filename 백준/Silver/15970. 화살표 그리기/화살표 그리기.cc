#include <bits/stdc++.h> 
using namespace std;

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin>>n;
	vector<vector<int>>v(n+1,vector<int>());
	int ans=0;
	for(int i=0;i<n;i++){
		int location,color;
		cin>>location>>color;
		v[color].push_back(location);
	}
	for(int i=0;i<v.size();i++){
		if(v[i].empty()){
			continue;
		}
		sort(v[i].begin(),v[i].end());
		ans+=v[i][1]-v[i][0];
		//cout<<ans<<"\n";
		for(int j=1;j<v[i].size()-1;j++){
			ans+=min(v[i][j]-v[i][j-1],v[i][j+1]-v[i][j]);
			//cout<<ans<<"\n";
		}
		ans+=v[i][v[i].size()-1]-v[i][v[i].size()-2];
		//cout<<ans<<"\n";
	}
	cout<<ans;
	return 0;
}
