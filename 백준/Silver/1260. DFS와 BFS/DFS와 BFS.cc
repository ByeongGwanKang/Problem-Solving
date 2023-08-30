#include <bits/stdc++.h> 
using namespace std;

static vector<vector<int>> v;
static vector<bool>visited;
void dfs(int s);
void bfs(int s);

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	int n,m,start;
	cin>>n>>m>>start;
	v.resize(n+1);
	visited=vector<bool>(n+1,false);
	for(int i=0;i<m;i++){
		int s,e;
		cin>>s>>e;
		v[s].push_back(e);
		v[e].push_back(s);
	}
	for(int i=1;i<=n;i++){
		sort(v[i].begin(),v[i].end());
	}
	dfs(start);
	cout<<"\n";
	fill(visited.begin(),visited.end(),false);
	bfs(start);
	return 0;
	}
void dfs(int s){
	visited[s]=true;
	cout<<s<<" ";
	for(int i:v[s]){
		if(visited[i]==false){
			dfs(i);
		}
	}
}
void bfs(int s){
	queue<int> q;
	q.push(s);
	visited[s]=true;
	while(!q.empty()){
		int now = q.front();
		q.pop();
		cout<<now<<" ";
		for(int i:v[now]){
			if(visited[i]==false){
				visited[i]=true;
				q.push(i);
			}
		}
	}
}