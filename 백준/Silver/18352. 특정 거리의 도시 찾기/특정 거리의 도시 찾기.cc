#include <bits/stdc++.h>
using namespace std;

vector<vector<int>>v;
vector<int>visited;
vector<int>ans;
void bfs(int x);

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	int n,m,k,x;
	cin>>n>>m>>k>>x;
	v.resize(n+1);
	visited.resize(n+1,-1);
	for(int i=0;i<m;i++){
		int s,e;
		cin>>s>>e;
		v[s].push_back(e);
	}
	bfs(x);
	for(int i=0;i<=n;i++){
		if(visited[i]==k){
			ans.push_back(i);
		}
	}
	if(ans.empty()){
		cout<<-1;
	}
	else{
		sort(ans.begin(),ans.end());
		for(int i:ans){
			cout<<i<<"\n";
		}
	}
    return 0;
}

void bfs(int x){
	queue <int> q;
	q.push(x);
	visited[x]++;
	while(!q.empty()){
		int now=q.front();
		q.pop();
		for(int i:v[now]){
			if(visited[i]==-1){
				visited[i]=visited[now]+1;
				q.push(i);
			}
		}
	}
}