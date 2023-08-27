#include <bits/stdc++.h> 
using namespace std;

static int cnt=0;
static vector<vector<int>> v;
static vector<bool>visited;
void dfs(int a);
int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	int n,m;
	cin>>n>>m;
	v.resize(n+1);
	visited=vector<bool>(n+1,false);
	for(int i=0;i<m;i++){
		int a,b;
		cin>>a>>b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	dfs(1);
	cout<<cnt-1;
}
void dfs(int a){
	cnt++;
	visited[a]=true;
	for(int i:v[a]){
		if(visited[i]==false){
			dfs(i);
		}
	}
}
