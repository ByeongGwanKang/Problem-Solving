#include <bits/stdc++.h> 
using namespace std;

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		int n;
		cin>>n;
		vector<pair<int,string>>v;
		for(int j=0;j<n;j++){
			int val;
			string str;
			cin>>str>>val;
			v.push_back({val,str});
		}
		sort(v.begin(),v.end());
		cout<<v[n-1].second<<"\n";
	}
	return 0;
}
