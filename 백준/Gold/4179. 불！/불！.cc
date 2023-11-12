#include <bits/stdc++.h>
using namespace std;

int r,c;
queue<pair<int,int>>fireq;	//불 큐
queue<pair<int,int>>jihunq;	//지훈 큐
string str[1002];
int firedist[1002][1002];	//불 이동
int jihundist[1002][1002];	//지훈 이동
int dx[]={0,1,0,-1};
int dy[]={1,0,-1,0};
void firebfs(){
	while(!fireq.empty()){
		int x=fireq.front().first;
		int y=fireq.front().second;
		fireq.pop();
		for(int i=0;i<4;i++){
			int nx=x+dx[i];
			int ny=y+dy[i];
			//범위를 벗어난 곳
			if(nx<0||ny<0||nx>=r||ny>=c) continue;
			//이미 방문했거나 벽인 곳
			if(firedist[nx][ny]>=0||str[nx][ny]=='#') continue;
			fireq.push({nx,ny});
			firedist[nx][ny]=firedist[x][y]+1;
		}
	}
}

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	cin>>r>>c;
	for(int i=0;i<r;i++){
		fill(jihundist[i],jihundist[i]+c,-1);
		fill(firedist[i],firedist[i]+c,-1);
		cin>>str[i];
	}
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			if(str[i][j]=='J'){
				jihundist[i][j]=0;
				jihunq.push({i,j});
			}
			if(str[i][j]=='F'){
				firedist[i][j]=0;
				fireq.push({i,j});
			}
		}
	}
	firebfs();
	while(!jihunq.empty()){
		int x=jihunq.front().first;
		int y=jihunq.front().second;
		jihunq.pop();
		for(int i=0;i<4;i++){
			int nx=x+dx[i];
			int ny=y+dy[i];
			//범위를 벗어나면 탈출한 것이므로 출력 후 종료
			if(nx<0||ny<0||nx>=r||ny>=c) {
				cout<<jihundist[x][y]+1;
				return 0;
			}
			//이미 방문했거나 벽이거나 불이 붙은 곳
			if(jihundist[nx][ny]>=0||str[nx][ny]=='#') continue;
			if(firedist[nx][ny]!=-1&&firedist[nx][ny]<=jihundist[x][y]+1) continue;
			jihunq.push({nx,ny});
			jihundist[nx][ny]=jihundist[x][y]+1;
		}
	}
	cout<<"IMPOSSIBLE";
    return 0;
}
