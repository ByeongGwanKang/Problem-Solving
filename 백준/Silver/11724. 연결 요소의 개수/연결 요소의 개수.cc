#include <bits/stdc++.h> 
using namespace std;

void dfs(int val);
static vector<bool>check;
static vector<vector<int>>graph;

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	int n,m;
	cin>>n>>m;
	check = vector<bool>(n+1,false);
	graph.resize(n+1);
	for(int i=0;i<m;i++){
		int start,end;
		cin>>start>>end;
		graph[start].push_back(end);
		graph[end].push_back(start);
	}
	int cnt=0;
	for(int i=1;i<=n;i++){
		if(!check[i])
			cnt++;
			dfs(i);
	}
	cout<<cnt;
}

void dfs(int val){
	if(check[val]){
		return;
	}
	
	check[val]=true;
	
	for(int i : graph[val]){
		if(check[i]==false)
			dfs(i);
	}
}