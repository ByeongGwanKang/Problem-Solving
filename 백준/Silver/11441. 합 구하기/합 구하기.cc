#include <bits/stdc++.h>
using namespace std;


int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin>>n;
	vector<int>v(n+1);
	v[0]=0;
	for(int i=1;i<=n;i++){
		int val;
		cin>>val;
		v[i]=v[i-1]+val;
	}
	int m;
	cin>>m;
	for(int i=0;i<m;i++){
		int s,e;
		cin>>s>>e;
		cout<<v[e]-v[s-1]<<"\n";
	}
	return 0;
}
