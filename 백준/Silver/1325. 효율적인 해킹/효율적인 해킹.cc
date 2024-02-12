#include <bits/stdc++.h> 
using namespace std;

int n,m;
int arr[10005];
vector<int>graph[10005];
vector<bool> vis(10005);
void dfs(int now){
	vis[now]=true;
	for(auto next:graph[now]){
		if(vis[next]==false){
			arr[next]++;
			dfs(next);
		}
	}
}

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	cin>>n>>m;
	for(int i=0;i<m;i++){
		int a,b;
		cin>>a>>b;
		graph[a].push_back(b);
	}
	for(int i=1;i<=n;i++){
		fill(vis.begin(),vis.end(),false);
		dfs(i);
	}
	int max_trust=0;
	for(int i=1;i<=n;i++){
		max_trust=max(max_trust,arr[i]);
	}
	for(int i=1;i<=n;i++){
		if(arr[i]==max_trust){
			cout<<i<<" ";
		}
	}
	return 0;
}