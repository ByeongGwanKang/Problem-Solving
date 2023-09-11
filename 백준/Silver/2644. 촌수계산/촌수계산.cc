#include <bits/stdc++.h> 
using namespace std;

vector<vector<int>>v;
vector<bool>visited;
int n;
void bfs();
int a,b;
queue<pair<int,int>>q;
bool check=false;
int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	cin>>n;
	cin>>a>>b;
	int m;
	cin>>m;
	v=vector<vector<int>>(n+1,vector<int>(n+1,0));
	visited=vector<bool>(n+1,false);
	for(int i=0;i<m;i++){
		int x,y;
		cin>>x>>y;
		v[x][y]++;
		v[y][x]++;
	}
	q.push({a,0});
	bfs();
	if(check==false)
		cout<<-1;
	return 0;
}

void bfs(){
	while(!q.empty()){
		int now = q.front().first;
		int cnt = q.front().second;
		if(now==b){
			check=true;
			cout<<cnt;
			return;
		}
		q.pop();
		for(int i=1;i<=n;i++){
			if(v[now][i]==1&&visited[i]==false){
				q.push({i,cnt+1});
				visited[i]=true;
			}
		}
	}
}