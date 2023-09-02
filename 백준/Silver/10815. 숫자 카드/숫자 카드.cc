#include <bits/stdc++.h> 
using namespace std;
	
int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	vector<bool> v(20000001);
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int val;
		cin>>val;
		v[val+10000000]=true;
	}
	int m;
	cin>>m;
	for(int i=0;i<m;i++){
		int ans;
		cin>>ans;
		if(v[ans+10000000]==true)
			cout<<1<<" ";
		else cout<<0<<" ";
	}
}
