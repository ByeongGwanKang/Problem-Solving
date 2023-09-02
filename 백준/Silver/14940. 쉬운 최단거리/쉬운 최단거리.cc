#include <bits/stdc++.h> 
using namespace std;

int v[1000][1000];
bool visited[1000][1000];
int dx[]={0,1,0,-1};
int dy[]={1,0,-1,0};
queue<pair<int,int>>q;
void bfs();
int n,m;

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>v[i][j];
			if(v[i][j]==2){
				q.push(make_pair(i,j));
				v[i][j]=0;
				visited[i][j]=true;
			}
			else if(v[i][j]==0)
				visited[i][j]=true;
		}
	}
	bfs();

	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(visited[i][j]==false){
				cout<<"-1 ";
			}
			else
				cout<<v[i][j]<<" ";
		}
		cout<<"\n";
	}
}

void bfs(){
	while(!q.empty()){
		int nowx=q.front().first;
		int nowy=q.front().second;
		q.pop();
		for(int i=0;i<4;i++){
			int x = nowx+dx[i];
			int y = nowy+dy[i];
			if(x>=0&&x<n&&y>=0&&y<m&&visited[x][y]==false){
				q.push(make_pair(x,y));
				v[x][y]=v[nowx][nowy]+1;
				visited[x][y]=true;
			}
		}
	}
}