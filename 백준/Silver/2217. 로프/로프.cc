#include <bits/stdc++.h>
using namespace std;

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin>>n;
	int ans;
	vector<int> v(n);
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	sort(v.begin(),v.end(),greater<int>());
	for(int i=0;i<n;i++){
		v[i]*=(i+1);
	}
	sort(v.begin(),v.end(),greater<int>());
	cout<<v[0];
	return 0;
}
