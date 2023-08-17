#include <bits/stdc++.h> 
using namespace std;
int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	int n,m,a,b;
	cin>>n>>m;
	int val;
	vector<int>v(n+1);
	for(int i=1;i<=n;i++){
		cin>>val;
		v[i]=v[i-1]+val;
	}
	for(int i=0;i<m;i++){
		cin>>a>>b;
		cout<<v[b]-v[a-1]<<"\n";
	}
	return 0;
}
