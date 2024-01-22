#include <bits/stdc++.h> 
using namespace std;

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin>>n;
	vector<int>v(n);
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	sort(v.begin(),v.end(),greater<int>());
	int ans=0;
	for(int i=0;i<n;i++){
		ans=max(ans,v[i]+i+2);
	}
	cout<<ans;
	return 0;
}
