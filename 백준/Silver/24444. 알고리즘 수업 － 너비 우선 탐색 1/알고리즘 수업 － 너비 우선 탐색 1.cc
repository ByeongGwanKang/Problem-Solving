#include <bits/stdc++.h>
using namespace std;

int n,m;
vector<vector<int>>graph(100001);
vector<int>visited(100001,0);
queue<int>q;
void bfs();
int cnt=0;

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	int r;
	cin>>n>>m>>r;
	for(int i=0;i<m;i++){
		int a,b;
		cin>>a>>b;
		graph[a].push_back(b);
		graph[b].push_back(a);
	}
	for(int i=1;i<=n;i++){
		sort(graph[i].begin(),graph[i].end());
	}
	q.push(r);
	bfs();
	for(int i=1;i<=n;i++){
		cout<<visited[i]<<"\n";
	}
	return 0;
}

void bfs(){
	cnt++;
	visited[q.front()]=cnt;
	while(!q.empty()){
		int now=q.front();
		q.pop();
		for(auto a: graph[now]){
			if(visited[a]==0){
				cnt++;
				q.push(a);
				visited[a]=cnt;
			}
		}
	}
}