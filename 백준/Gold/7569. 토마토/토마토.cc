#include <bits/stdc++.h> 
using namespace std;

vector<vector<vector<int>>> v;
void bfs();
int dx[]={0,1,0,-1};
int dy[]={1,0,-1,0};
int cnt=0;
queue<pair<pair<int,int>,int>>q;
int m,n,h;
int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	cin>>m>>n>>h;
	v.resize(n,vector<vector<int>>(m,vector<int>(h)));
	for(int k=0;k<h;k++){
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cin>>v[i][j][k];
			}
		}
	}
	for(int k=0;k<h;k++){
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(v[i][j][k]==1)
					q.push(make_pair(make_pair(i,j),k));
			}
		}
	}
	bfs();
	for(int k=0;k<h;k++){
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(v[i][j][k]==0){
					cout<<-1;
					return 0;
				}
				if(v[i][j][k]>cnt){
					cnt=v[i][j][k];
				}
			}
		}
	}
	cout<<cnt-1;
	return 0;
}

void bfs(){
	while(!q.empty()){
		int nowx=q.front().first.first;
		int nowy=q.front().first.second;
		int nowz=q.front().second;
		q.pop();
		for(int k=0;k<4;k++){
			int x = nowx+dx[k];
			int y = nowy+dy[k];
			if(x>=0&&y>=0&&x<n&&y<m&&v[x][y][nowz]==0){
				v[x][y][nowz]=v[nowx][nowy][nowz]+1;
				q.push(make_pair(make_pair(x,y),nowz));
			}
			if(nowz+1<h){
				if(v[nowx][nowy][nowz+1]==0){
					v[nowx][nowy][nowz+1]=v[nowx][nowy][nowz]+1;
					q.push(make_pair(make_pair(nowx,nowy),nowz+1));
					}
				}
			if(nowz-1>=0){
				if(v[nowx][nowy][nowz-1]==0){
					v[nowx][nowy][nowz-1]=v[nowx][nowy][nowz]+1;
					q.push(make_pair(make_pair(nowx,nowy),nowz-1));
					}
				}
			}
		}
	}
