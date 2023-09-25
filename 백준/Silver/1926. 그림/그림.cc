#include <bits/stdc++.h>
using namespace std;

vector<vector<int>>v;
vector<vector<bool>>visited;
int dx[]={0,1,0,-1};
int dy[]={1,0,-1,0};
int picsize;
void bfs();
queue<pair<int,int>> q;
int n,m;

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	cin>>n>>m;
	int cnt=0;
	v.resize(n+1,vector<int>(m+1));
	visited.resize(n+1,vector<bool>(m+1,false));
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>v[i][j];
		}
	}
	int maxsize=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(v[i][j]==1&&visited[i][j]==false){
				picsize=0;
				visited[i][j]=true;
				q.push({i,j});
				bfs();
				cnt++;
				maxsize=max(maxsize,picsize);
			}
		}
	}
	cout<<cnt<<"\n";
	cout<<maxsize;
    return 0;
}

void bfs(){
	while(!q.empty()){
		picsize++;
		int nowx=q.front().first;
		int nowy=q.front().second;
		q.pop();
		for(int i=0;i<4;i++){
			int x=nowx+dx[i];
			int y=nowy+dy[i];
			if(x>=0&&x<n&&y>=0&&y<m){
				if(visited[x][y]==false&&v[x][y]==1){
					visited[x][y]=true;
					q.push({x,y});
				}
			}
		}
	}
}