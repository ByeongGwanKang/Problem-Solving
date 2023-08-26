#include <bits/stdc++.h> 
using namespace std;

static int dx[]={1,0,-1,0};
static int dy[]={0,1,0,-1};
void bfs(int i,int j);
static int maze[101][101];
static bool visited[101][101]={false};
static int n,m;

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	cin>>n>>m;
	string str;
	for(int i=0;i<n;i++){
		cin>>str;
		for(int j=0;j<m;j++){
			maze[i][j]=str[j]-'0';
		}
	}
	bfs(0,0);
	cout<<maze[n-1][m-1];
}

void bfs(int i,int j){
	queue <pair<int,int>> q;
	q.push(make_pair(i,j));
	while(!q.empty()){
		int now[2];
		now[0]=q.front().first;
		now[1]=q.front().second;
		q.pop();
		visited[now[0]][now[1]]=true;
		for(int k=0;k<4;k++){
			int x=now[0]+dx[k];
			int y=now[1]+dy[k];
			if(maze[x][y]==1&&visited[x][y]==false){
				visited[x][y]=true;
				maze[x][y]=maze[now[0]][now[1]]+1;
				q.push(make_pair(x,y));
			}
		}
	}
}
