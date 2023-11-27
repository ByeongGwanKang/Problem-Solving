#include <bits/stdc++.h>
using namespace std;

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	int n,k;
	int cnt=0;
	cin>>n>>k;
	vector<int>v(n+1);
	vector<int>check(200001);
	int s=0;
	int ans=0;
	check[v[0]]++;
	cnt++;
	for(int i=0;i<n;i++){
		cin>>v[i];
		check[v[i]]++;
		//초과했다면 같은 수가 빠질때까지 pop
		while(check[v[i]]>k){
			check[v[s]]--;
			s++;
		}
		ans=max(ans,i-s+1);
	}
	cout<<ans;
	return 0;
}
