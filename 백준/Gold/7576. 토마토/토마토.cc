#include <bits/stdc++.h> 
using namespace std;

vector<vector<int>> v;
void bfs();
int dx[]={0,1,0,-1};
int dy[]={1,0,-1,0};
int cnt=0;
queue<pair<int,int>>q;
int m,n;
int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	cin>>m>>n;
	v.resize(n,vector<int>(m));
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>v[i][j];
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(v[i][j]==1)
				q.push(make_pair(i,j));
		}
	}
	bfs();
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(v[i][j]==0){
				cout<<-1;
				return 0;
			}
			if(v[i][j]>cnt){
				cnt=v[i][j];
			}
		}
	}
	cout<<cnt-1;
	return 0;
}

void bfs(){
	while(!q.empty()){
		int nowx=q.front().first;
		int nowy=q.front().second;
		q.pop();
		for(int k=0;k<4;k++){
			int x = nowx+dx[k];
			int y = nowy+dy[k];
			if(x>=0&&y>=0&&x<n&&y<m&&v[x][y]==0){
				v[x][y]=v[nowx][nowy]+1;
				q.push(make_pair(x,y));
			}
		}
	}
}